#include "Goaliev1.h"
#include "skill/Factory.h"
#include "VisionModule.h"
#include "TaskMediator.h"
#include "parammanager.h"
#include "iostream"

namespace{
    bool DEBUG_SWITCH = true;   //debug开关

    const CGeoPoint OUR_GOAL(-PARAM::Field::PITCH_LENGTH/2,0);  //我方球门中心
    const CGeoPoint LEFT_GOAL_POST(-PARAM::Field::PITCH_LENGTH/2,-PARAM::Field::GOAL_WIDTH/2 - 2);  //左门柱
    const CGeoPoint RIGHT_GOAL_POST(-PARAM::Field::PITCH_LENGTH/2,PARAM::Field::GOAL_WIDTH/2 + 2);  //右门柱
    const CGeoSegment GOAL_LINE(LEFT_GOAL_POST,RIGHT_GOAL_POST);    //门线
    //禁区区域（待修改）
    const static int MIN_X = -PARAM::Field::PITCH_LENGTH/2;
    const static int MAX_X = -PARAM::Field::PITCH_LENGTH/2 + PARAM::Field::PENALTY_AREA_DEPTH;
    const static int MIN_Y = -PARAM::Field::PENALTY_AREA_WIDTH/2;
    const static int MAX_Y = PARAM::Field::PENALTY_AREA_WIDTH/2;
    //正常防守方向
    double get_defence_direction(const CGeoPoint & pos){
        double leftPostToBallDir = (pos - LEFT_GOAL_POST).dir();
        double rightPostToBallDir = (pos - RIGHT_GOAL_POST).dir();
        if(DEBUG_SWITCH){
            GDebugEngine::Instance()->gui_debug_line(pos,LEFT_GOAL_POST,6);
            GDebugEngine::Instance()->gui_debug_line(pos,RIGHT_GOAL_POST,6);
        }
        return Utils::Normalize((leftPostToBallDir + rightPostToBallDir) / 2 + PARAM::Math::PI);
    }
    //判断坐标是否在禁区
    bool in_our_penalty(const CGeoPoint& pos,double padding){
        if(pos.x() > MIN_X + padding && pos.x() < MAX_X - padding && pos.y() > MIN_Y + padding && pos.y() < MAX_Y - padding)
            return true;
        return false;
    }
}

CGoalieV1::CGoalieV1():_state(CGoalieV1::NOTHING){
    ZSS::ZParamManager::instance()->loadParam(DEBUG_SWITCH,"Debug/GoalieV1",false);
}

void CGoalieV1::plan(const CVisionModule* pVision){
    if (pVision->getCycle() - _lastCycle > PARAM::Vision::FRAME_RATE*0.1){
        _state = CGoalieV1::NOTHING;
    }

    const int vecNumber = task().executor;
    const PlayerVisionT& self = pVision->ourPlayer(vecNumber);

    auto ballpos = pVision->ball().Pos();
    CGeoEllipse stand_ellipse(OUR_GOAL,PARAM::Field::PENALTY_AREA_DEPTH/2,PARAM::Field::GOAL_WIDTH/2);
    CGeoLineEllipseIntersection stand_intersection(CGeoLine(ballpos,get_defence_direction(ballpos)),stand_ellipse);
    CGeoPoint stand_pos;
    if(stand_intersection.intersectant()){
        if(ballpos.dist2(stand_intersection.point1())<ballpos.dist2(stand_intersection.point2()))
            stand_pos = stand_intersection.point1();
        else
            stand_pos = stand_intersection.point2();
        if(stand_pos.x() < MIN_X + PARAM::Vehicle::V2::PLAYER_SIZE)
            stand_pos.setX(MIN_X + PARAM::Vehicle::V2::PLAYER_SIZE);
    }else{
        stand_pos = CGeoPoint(-PARAM::Field::PITCH_LENGTH/2+PARAM::Vehicle::V2::PLAYER_SIZE,0);
    }
    double stand_dir = (ballpos-stand_pos).dir();
    bool need_clear = in_our_penalty(ballpos,-16*10);


    int enemynum;
    double enemydir;
    CGeoPoint enemypos;
    if(ballpos.x() > 0)
        enemynum = 100;
    else
        enemynum = CGoalieV1::get_enemynumv1(pVision);
    // SAVE
    auto ball_vel = pVision->ball().Vel().mod();
    auto ball_vel_dir = pVision->ball().Vel().dir();
    CGeoSegment ball_line(ballpos,ballpos + Utils::Polar2Vector(99999,ball_vel_dir));
    CGeoLineLineIntersection danger_intersection(ball_line,GOAL_LINE);
    CGeoPoint clear_pos = ballpos + Utils::Polar2Vector(80,(OUR_GOAL - ballpos).dir());

    bool danger_to_our_goal = danger_intersection.Intersectant() && ball_line.IsPointOnLineOnSegment(danger_intersection.IntersectPoint()) && GOAL_LINE.IsPointOnLineOnSegment(danger_intersection.IntersectPoint()) && (ball_vel_dir - (danger_intersection.IntersectPoint() - ballpos).dir()) < PARAM::Math::PI/18;

    TaskT newTask(task());
    if(enemynum != 100){
        GDebugEngine::Instance()->gui_debug_msg(CGeoPoint(0,0),"state: ANTI_AIM",0);
        printf("%d\r\n",enemynum);
        enemydir = pVision->theirPlayer(enemynum).Dir();
        enemypos = pVision->theirPlayer(enemynum).Pos();
        CGeoLineLineIntersection GetPoint(CGeoLine(enemypos,enemydir), CGeoLine(CGeoPoint(-2920,2000),-PARAM::Math::PI/2));
        CGeoPoint p = GetPoint.IntersectPoint();
        GDebugEngine::Instance()->gui_debug_line(enemypos,p,2);
        if(p.y()>(-360) && p.y()<360){
            if(ballpos.x() > -2500){
                CGeoLineEllipseIntersection stand_intersection2(CGeoLine(enemypos,enemydir),stand_ellipse);
                if(stand_intersection2.intersectant()){
                    if(ballpos.dist2(stand_intersection2.point1())<ballpos.dist2(stand_intersection2.point2()))
                        stand_pos = stand_intersection2.point1();
                    else
                        stand_pos = stand_intersection2.point2();
                    if(stand_pos.x() < MIN_X + PARAM::Vehicle::V2::PLAYER_SIZE)
                        stand_pos.setX(MIN_X + PARAM::Vehicle::V2::PLAYER_SIZE);
                }else{
                    stand_pos = CGeoPoint(-PARAM::Field::PITCH_LENGTH/2+PARAM::Vehicle::V2::PLAYER_SIZE,0);
                }
                _state = ANTI_AIM;
                newTask.player.pos = stand_pos;
                setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));
            }
            else if(ballpos.x() < -2600){
                _state = STAND;
                newTask.player.pos = stand_pos;
                newTask.player.angle = stand_dir;
                setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));
            }
            else{
                _state = STAND;
                newTask.player.pos = stand_pos;
                newTask.player.angle = stand_dir;
                setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));
            }
        }
    }
    else if(danger_to_our_goal ){
        if(ball_vel > 300){
            GDebugEngine::Instance()->gui_debug_msg(newTask.player.pos,"state: SAVE",0);
            _state = SAVE;
            setSubTask(TaskFactoryV2::Instance()->Touch(newTask));
        }
        else{
            GDebugEngine::Instance()->gui_debug_msg(newTask.player.pos,"state: SAVE",0);
            _state = SAVE;
            setSubTask(TaskFactoryV2::Instance()->Getball(newTask));
        }
    }
    else if(need_clear && ballpos.x() > -3000){
        _state = CLEAR;
        newTask.player.pos = clear_pos;
        newTask.player.angle = stand_dir;
        DribbleStatus::Instance()->setDribbleCommand(vecNumber, 3);
        KickStatus::Instance()->setKick(vecNumber,8000);
        setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));
    }
    else if(ballpos.x() < -3000){
        _state = STOP;
        newTask.player.pos = CGeoPoint(-2900,0);
        newTask.player.angle = 0;
        setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));
    }
    else{
        GDebugEngine::Instance()->gui_debug_msg(newTask.player.pos,"state: STAND",0);
        _state = STAND;
        newTask.player.pos = stand_pos;
        newTask.player.angle = stand_dir;
        setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));
    }
    if(DEBUG_SWITCH){
        switch(_state){
        case NOTHING:
            debug_state = "NOTHING";
            break;
        case STAND:
            debug_state = "STAND";
            break;
        case SAVE:
            debug_state = "SAVE";
            break;
        case CLEAR:
            debug_state = "CLEAR BALL";
            GDebugEngine::Instance()->gui_debug_x(clear_pos,0);
            GDebugEngine::Instance()->gui_debug_msg(clear_pos,"cpos",0);
            break;
        case ANTI_AIM:
            debug_state = "ANTI_AIM";
            GDebugEngine::Instance()->gui_debug_msg(newTask.player.pos,"state: ANTI_AIM",0);
            break;
        case STOP:
            debug_state = "STOP";
            GDebugEngine::Instance()->gui_debug_msg(newTask.player.pos,"state: STOP",0);
            break;
        default:
            debug_state = "ERROR STATE";
        }
        GDebugEngine::Instance()->gui_debug_msg(CGeoPoint(-PARAM::Field::PITCH_LENGTH/2,PARAM::Field::GOAL_WIDTH/2),debug_state.c_str());
    }
    _lastCycle = pVision->getCycle();
    CPlayerTask::plan(pVision);
}

int CGoalieV1::get_enemynumv1(const CVisionModule* pVision){
    int i;CGeoPoint enemy;
    auto ballpos = pVision->ball().Pos();
    for(i=0;i<5;i++){
        CGeoPoint x = pVision->theirPlayer(i).Pos();
        if(x.dist(ballpos)<150){
            return i;
            break;
        }
        if(i == 5){
            break;
        }
    }
    return 100;
}
