#include <iostream>
#include <memory>
using namespace std;
int main()
{
    int a = 10;
    auto p = make_shared<int>(a);
    cout  << *p << endl;

    return 0;

}

