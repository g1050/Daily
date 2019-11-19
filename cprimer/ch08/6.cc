#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> v;

    ifstream in("test.txt",ios::in );
    if(!in.is_open()) cout << "Error" << endl;
    while(!in.eof())//表示从第二个参数开始读　读到最后一个参数o
    {
        string tmp;
       getline(in,tmp); 
       v.push_back(tmp);
    }


    for(auto it = v.begin();it != v.end();it++){
        cout << *it << endl;
    }
    return 0;
}

