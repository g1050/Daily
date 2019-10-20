#include <iostream>
using namespace std;
int main()
{
     int x = 5;
     int y = 6;
     const int z = 7;
     const int q = 9;
     int *const p = &x;//指针常量 一种指针类型的常量
     /* p = &y;//尝试改变常量指针的指向 */
     
     /* const int *p = x;//常量指针 一种指向常量的指针 *///试图用常量指针指向非常量变量
     const int *p2 = &z;
     const int &b = 5;
     /* *p2 = 2;//尝试改变常量指针所指向的内容的值 */
     p2 = &q; 
    
     const double pi = 3.14;
     const int &pi2 = pi;
     /* 上述相当于const int temp = pi; */
     /* const int &pi2 = temp; */
     cout << pi2 << endl;
     int &r = 0;
     return 0;
}

