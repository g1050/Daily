#include <iostream>
using std::cout;
using std::endl;
namespace A
{
    int a = 1;
}
int main()
{
    int a = 3;
    cout << a << endl;
    cout << A::a << endl;
    return 0;
}

