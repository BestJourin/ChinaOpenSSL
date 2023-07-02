#include "Getball.h"
#include "skill/Factory.h"
#include "parammanager.h"
#include "WorldDefine.h"
#include "VisionModule.h"
#include "staticparams.h"
#include "DribbleStatus.h"
#include "RobotSensor.h"

namespace{
    bool DEBUG_SWITCH;
}

CGetball::CGetball()
{
    ZSS::ZParamManager::instance()->loadParam(DEBUG_SWITCH,"Debug/Touch",false);
}

void CGetball::plan(const CVisionModule* pVision){
    if (pVision->getCycle() - _lastCycle > PARAM::Vision::FRAME_RATE*0.1){
    }

    const CGeoPoint target = task().player.pos;
    const int runner = task().executor;
    auto taskFlag = task().player.flag;
    const PlayerVisionT& me = pVision->ourPlayer(runner);
    const MobileVisionT& ball = pVision->ball();
    const auto mousePos = me.Pos() + Utils::Polar2Vector(PARAM::Vehicle::V2::PLAYER_CENTER_TO_BALL_CENTER,me.Dir());
    const double ballVelDir = ball.Vel().dir();
    const CGeoPoint& ballPos = ball.RawPos();
    const CGeoLine ballVelLine(ballPos, ballVelDir);
    const double ballVelMod = ball.Vel().mod();
    const double toBallDist = (mousePos - ballPos).mod();
    const CGeoPoint projectionPos = ballVelLine.projection(mousePos);

    CGeoPoint targetPos;
    double targetDir;

    TaskT newTask(task());
    if(ballVelMod < 200 && !RobotSensor::Instance()->IsInfraredOn(runner)){
        _state = NORMAL;
        GDebugEngine::Instance()->gui_debug_msg(CGeoPoint(0,0),"state : NORMAL",3);
        targetDir = (ballPos - me.Pos()).dir();
        targetPos = ballPos + Utils::Polar2Vector(-PARAM::Vehicle::V2::PLAYER_CENTER_TO_BALL_CENTER + 10,targetDir);

    }
    else if(RobotSensor::Instance()->IsInfraredOn(runner)){
        _state = KEEP;
        GDebugEngine::Instance()->gui_debug_msg(CGeoPoint(0,0),"state : KEEP",3);
        targetDir = me.Dir();
        targetPos = me.Pos();
    }
    else if(ballVelMod > 200 && (ballVelDir - (ballPos - me.Pos()).dir()) < PARAM::Math::PI/6){
        _state = MOVE;
        GDebugEngine::Instance()->gui_debug_msg(CGeoPoint(0,0),"state : MOVE",3);
        targetDir = (ballPos - me.Pos()).dir();
        targetPos = ballPos + Utils::Polar2Vector(PARAM::Vehicle::V2::PLAYER_CENTER_TO_BALL_CENTER + 20,targetDir);
    }
    else{
        _state = INTER;
        GDebugEngine::Instance()->gui_debug_msg(CGeoPoint(0,0),"state : INTER",3);
        targetDir = (target - mousePos).dir();
        targetPos = projectionPos + Utils::Polar2Vector(PARAM::Vehicle::V2::PLAYER_CENTER_TO_BALL_CENTER,targetDir + PARAM::Math::PI);
    }

    // add avoid ball flag
    if(toBallDist>200){
        taskFlag |= PlayerStatus::DODGE_BALL;
    }

    if(toBallDist<120){
        taskFlag |= PlayerStatus::DRIBBLE;
    }

    GDebugEngine::Instance()->gui_debug_x(targetPos,3);
    newTask.player.pos = targetPos;
    newTask.player.angle = targetDir;
    setSubTask(TaskFactoryV2::Instance()->SmartGotoPosition(newTask));

    if(DEBUG_SWITCH){
    }

    _lastCycle = pVision->getCycle();
    CPlayerTask::plan(pVision);
}
