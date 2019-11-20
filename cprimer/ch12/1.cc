#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> p = make_shared<int>(5);
    auto q = p;
    cout << *p << endl;

    *p = 6;
    *q = 7;
    cout << *p << endl;


    return 0;
}

