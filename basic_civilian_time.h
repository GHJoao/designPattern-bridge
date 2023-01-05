#ifndef BASIC_CIVILIAN_TIME_H_INCLUDED
#define BASIC_CIVILIAN_TIME_H_INCLUDED

#include "basic_time.h"
#include "civilian_time_imp.h"

class CivilianTime : public Time
{
    public:
        CivilianTime(int hr, int min, int pm)
        {
            imp_ = new CivilianTimeImp(hr, min, pm);
        }
};

#endif // BASIC_CIVILIAN_TIME_H_INCLUDED
