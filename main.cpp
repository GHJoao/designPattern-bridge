#include <iostream>
#include "basic_time.h"
#include "basic_civilian_time.h"
#include "basic_zulu_time.h"
#include "basic_brazilian_time.h"

using namespace std;

int main()
{
    Time* times[4];
    times[0] = new Time(14, 30);
    times[1] = new CivilianTime(2, 30, 1);
    times[2] = new ZuluIime(14, 30, 6);
    times[3] = new BrazilianTime(14, 30);
    for(int i = 0; i<4; i++)
    {
        times[i]->tell();
    }

    return 0;
}
