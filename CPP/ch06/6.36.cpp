#include <iostream>
#include <string>
using namespace std;

using arrT = string [10];//别名声明

arrT &  (f(arrT & a))  
{
   return a; 
}

int main()
{
    string a[10];
    f(a);
    return 0;
}

