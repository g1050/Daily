#include <iostream>
#include <vector>
using namespace std;

int plu(int a,int b)
{
    return a + b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int divv(int a,int b)
{
    return a/b;
}

int main()
{
    vector<int (*) (int a,int b) > v;
    v.push_back(&plu);
    v.push_back(&sub);
    v.push_back(&mul);
    v.push_back(&divv);
    
    for(auto it = v.begin();it != v.end();it++){
        cout << (*it)(4,2) << endl;
    }
    return 0;
}

