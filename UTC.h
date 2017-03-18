//4. UTC time
//Daniel Truong
//March 18 2017

#include <iostream>
#include <time.h>
#ifndef UTC
#define UTC

void UTC()
{
        time_t t;
        struct tm* tmp;
        time (&t);
        tmp = gmtime(&t);
        std::cout << "The UTC time is: " << tmp << std::endl;
}
#endif
