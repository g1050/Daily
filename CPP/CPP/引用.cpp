#include <iostream>
using namespace std;
typedef struct Teacher
{
    int age;
}Teacher;

int get1()
{
    int a;
    a = 10;
    return a;
}

int& get2(int &a)
{
    return a;
}

int& get3()
{
    static int a = 40;
    return a;
}
int main()
{
    int *p;

    cout << "sizeof(p):" << sizeof(p) << endl;
    cout << "sizeof(Teacher):" << sizeof(Teacher) << endl;
    /* t.&a = b; */

    int a = 20;
    int a1 = get1();
    int &a2 = get2(a);

    cout << "a1 = " << a1 << endl;
    cout << "a1 = " << a2 << endl;
    
    a2 = 30; 
    cout << "a = " << a << endl;

    int a3 = get3();
    cout << "a3 = " << a3 << endl;
    return 0;
}

