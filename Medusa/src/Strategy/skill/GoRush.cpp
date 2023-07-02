#include "GoRush.h"
#include "skill/Factory.h"
#include "parammanager.h"
#include "WorldDefine.h"
#include "VisionModule.h"
#include "staticparams.h"

namespace{
    const CGeoPoint THEIR_GOAL = CGeoPoint(PARAM::Field::PITCH_LENGTH/2,0);
    bool DEBUG_SWITCH;
}

CGoRush::CGoRush()
{
    ZSS::ZParamManager::instance()->loadParam(DEBUG_SWITCH,"Debug/Touch",false);
}

void CGoRush::plan(const CVisionModule* pVision){
    if (pVision->getCycle() - _lastCycle > PARAM::Vision::FRAME_RATE*0.1){
    }

    TaskT newTask(task());
    setSubTask(TaskFactoryV2::Instance()->Touch(newTask));
    _lastCycle = pVision->getCycle();
    CPlayerTask::plan(pVision);
}
