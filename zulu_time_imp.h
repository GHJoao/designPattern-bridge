#ifndef ZULU_TIME_IMP_H_INCLUDED
#define ZULU_TIME_IMP_H_INCLUDED

#include "time_imp.h"

class ZuluTimeImp : public TimeImp
{
    public:
        ZuluTimeImp(int hr, int min, int zone) : TimeImp(hr, min)
        {
            if(zone == 5)
                strcpy(zone_, " Eastern Standard Time");
            else if (zone == 6)
                strcpy(zone_, " Central Standard Time");
        }
        void tell()
        {
            cout << "Time is " << setw(2) << setfill('0') << hr_ << ":" << min_ << zone_ << endl;
        }

    protected:
        char zone_[30];
};

#endif // ZULU_TIME_IMP_H_INCLUDED
