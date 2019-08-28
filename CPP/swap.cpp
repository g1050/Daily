#include <iostream>
using namespace std;
template <class T>
void swap2(T &a , T &b)
{
    T tmp = a;
    a     = b;
    b     = tmp;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << a << "  " << b << "\n";
    swap2(a,b);
    cout << a << "  " << b << "\n";
    return 0;
}

