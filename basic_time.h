#ifndef BASIC_TIME_H_INCLUDED
#define BASIC_TIME_H_INCLUDED

#include "time_imp.h"

class Time
{
    public:
        Time(){}
        Time(int hr, int min)
        {
            imp_ = new TimeImp(hr, min);
        }
        virtual void tell()
        {
            imp_->tell();
        }

    protected:
        TimeImp *imp_;
};

#endif // BASIC_TIME_H_INCLUDED
