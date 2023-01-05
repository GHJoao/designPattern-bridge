#ifndef BASIC_ZULU_TIME_H_INCLUDED
#define BASIC_ZULU_TIME_H_INCLUDED

#include "basic_time.h"
#include "zulu_time_imp.h"

class ZuluIime : public Time
{
    public:
        ZuluIime(int hr, int min, int zone)
        {
            imp_ = new ZuluTimeImp(hr, min, zone);
        }
};

#endif // BASIC_ZULU_TIME_H_INCLUDED
