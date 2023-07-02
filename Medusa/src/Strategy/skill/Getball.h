#ifndef CGETBALL_H
#define CGETBALL_H

#include <skill/PlayerTask.h>


class CGetball : public CPlayerTask
{
public:
    CGetball();
    virtual void plan(const CVisionModule* pVision);
    virtual bool isEmpty() const { return false; }
    virtual void toStream(std::ostream& os) const { os << "Getball"; }
private:
    int _lastCycle;
    enum STATE{
        NORMAL,
        MOVE,
        INTER,
        KEEP,
    };
    STATE _state;
    std::string debug_state;
};

#endif // CGETBALL_H
