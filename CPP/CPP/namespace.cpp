#include <iostream>
using namespace std;
namespace namespaceA
{
    int a = 10;
}

namespace namespaceB
{
    int a = 20;
    namespace namespaceC
    {
        int a = 30;
    }
}

int main()
{
    using namespace namespaceA;
    using namespace namespaceB;
    cout << namespaceA::a << endl;
    cout << namespaceB::namespaceC::a << endl;
    return 0;
}

