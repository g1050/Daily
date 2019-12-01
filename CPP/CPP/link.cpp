#include <iostream>
#include "head.h"
using namespace std;

extern unsigned short  thatnum;
static bool printMe = false;

int main()
{
    unsigned short num;
    cin >> num;

    unsigned long res = returnFactorial(num);
    cout << "res = " << res << "\n";

    cout << "headnum = " << returnFactorial(headnum) << "\n";

    if(printMe){
        cout << "True" << "\n";
    }else{
        cout << "false\n" ;
    }
    return 0;
}

