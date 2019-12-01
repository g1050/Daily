#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
int main()
{
    vector<int > v;
    for(int i = 0;i<5;i++){
        v.push_back(i);
    }

    vector <int >::iterator it = v.begin();//初始化迭代器

    while(it != v.end()){
        cout << *it << "\n" ;
        it++;
    }
    
    print();
    return 0;
}

