#include <iostream>
#include <vector>
#include <memory>
using namespace std;
typedef vector<int> Type;
void f(shared_ptr<Type> p)
{
    int a;
    for(int i = 0;i<5;i++){
        cin >> a;
        p->push_back(a);
    }
    return;
}

void g(shared_ptr<Type> p)
{
    for(auto it = p->begin();it != p->end();it++){
        cout << *it << endl;
    }
    return ;
}

int main()
{
    shared_ptr<Type > p = make_shared<Type>();
    f(p);
    g(p);
    return 0;
}

