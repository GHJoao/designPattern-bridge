#ifndef TIME_IMP_H_INCLUDED
#define TIME_IMP_H_INCLUDED

#include <iomanip>
#include <string.h>
#include <iostream>
using namespace std;

class TimeImp
{
    public:
        TimeImp(int hr, int min)
        {
            hr_ = hr;
            min_ = min;
        }
        virtual void tell()
        {
            cout << "Time is " << setw(2) << setfill('0') << hr_ << ":" << min_ << endl;
        }

    protected:
        int hr_, min_;
};

#endif // TIME_IMP_H_INCLUDED
