#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Bi
{
    public:
        void inPut();
        int find();
    private:
        vector <int> v;
};
void Bi::inPut()
{
    int temp;
    while(cin >> temp){
       v.push_back(temp);  
    }
    return ;
}

int Bi::find()
{
    cout << "请输入要查找的数字" << endl;
    int v;
    cin >> v;
    cout << v << endl;
    auto x = this->v.begin();
    auto y = this->v.end();

    sort(x,y);
    auto m = this->v.begin()+(y-x)/2;

    while(x <  y){
        m = x+(y-x)/2;
        if(*m >= v) y = m;
        else x = m +1;
    }

    return x-this->v.begin();
}
int main()
{
    Bi b;
    b.inPut();
    cout << b.find();
    return 0;
}

