#include <iostream>
#include "String.h"
int main()
{
    String s1;//空串
    String s2("Hello s2!");
    String s3(s2);
   
    /* String s4 = "Hello s4"; */
    
    String s4 ;
    s4 = "Hello s4";
    
    String s5 = s2;

    cout << s2[0] << "\n";
    return 0;
}

