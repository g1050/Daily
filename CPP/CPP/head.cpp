#include "head.h"

/* static const unsigned short headnum = 8; */

bool printMe = true;

unsigned long returnFactorial(unsigned short num)
{
    unsigned long sum = 1;

    for(int i = 1;i<=num;i++){
        sum *= i;
    }

    if(printMe)
        return sum;
    else return 0;
}
