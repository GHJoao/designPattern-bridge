#ifndef BASIC_BRAZILIAN_TIME_H_INCLUDED
#define BASIC_BRAZILIAN_TIME_H_INCLUDED

#include "basic_time.h"
#include "brazilian_time_imp.h"

class BrazilianTime : public Time
{
    public:
        BrazilianTime(int hr, int min)
        {
            imp_ = new BrazilianTimeImp(hr, min);
        }
};

#endif // BASIC_BRAZILIAN_TIME_H_INCLUDED
