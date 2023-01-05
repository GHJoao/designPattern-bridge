#ifndef CIVILIAN_TIME_IMP_H_INCLUDED
#define CIVILIAN_TIME_IMP_H_INCLUDED

#include "time_imp.h"

class CivilianTimeImp : public TimeImp
{
    public:
        CivilianTimeImp(int hr, int min, int pm) : TimeImp(hr, min)
        {
            if(pm)
                strcpy(whichM_, " PM");
            else
                strcpy(whichM_, " AM");
        }

        void tell()
        {
            cout << "Time is " << hr_ << ":" << min_ << whichM_ << endl;
        }
    protected:
        char whichM_[4];
};

#endif // CIVILIAN_TIME_IMP_H_INCLUDED
