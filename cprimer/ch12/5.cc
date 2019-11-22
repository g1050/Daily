#include <iostream>
#include <memory>
using namespace std;
void f()
{
    new int;
}

void g(shared_ptr<int> p)
{

}

int main()
{
    auto p = make_shared<int,g>(10);
    return 0;
}


