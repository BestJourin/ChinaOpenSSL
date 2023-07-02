#ifndef GOALIEV1_H
#define GOALIEV1_H
#include <skill/PlayerTask.h>

class CGoalieV1 : public CPlayerTask{
public:
    CGoalieV1();
    virtual void plan(const CVisionModule* pVision);
    virtual bool isEmpty() const { return false; }
    virtual void toStream(std::ostream& os) const { os << "GoalieV1"; }
    virtual int get_enemynumv1(const CVisionModule* pVision); //获取敌方是否持球，及持球车号
private:
    int _lastCycle;
    enum STATE{
        NOTHING = 0,
        STAND,
        SAVE,
        CLEAR,
        ANTI_AIM,
        STOP
    };
    STATE _state;
    std::string debug_state;
};

#endif // GOALIEV1_H
