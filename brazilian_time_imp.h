#ifndef BRAZILIAN_TIME_IMP_H_INCLUDED
#define BRAZILIAN_TIME_IMP_H_INCLUDED

#include "time_imp.h"

class BrazilianTimeImp : public TimeImp
{
    public:
        BrazilianTimeImp(int hr, int min) : TimeImp(hr, min){}
        void tell()
        {
            cout << "Time is " << setw(2) << setfill('0') << hr_ << ":" << min_ << " BRT" << endl;
        }
};

#endif // BRAZILIAN_TIME_IMP_H_INCLUDED
