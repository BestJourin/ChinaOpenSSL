#ifndef CGORUSH_H
#define CGORUSH_H
#include <skill/PlayerTask.h>

class CGoRush : public CPlayerTask
{
public:
    CGoRush();
    virtual void plan(const CVisionModule* pVision);
    virtual bool isEmpty() const { return false; }
    virtual void toStream(std::ostream& os) const { os << "GoRush"; }
private:
    int _lastCycle;
};

#endif // CGORUSH_H

