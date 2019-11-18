#include <iostream>
#include "File.h"
#include <map>
using namespace std;
int main()
{
    string s1,s2;
    map<char,int> mp ;

    File file;
    cout <<  "源文件名字:" << endl;
    cin >> s1;
    cout << "压缩文件名字:" << endl;
    cin >> s2;
    file.encoded(s1,s2);  

    File file2;
    file2.decoding(s2,"111");
    /* for(auto it = mp.begin() ; it != mp.end() ;it++){ */
    /*     cout << (int)it->first << " " << it->second << endl; */
    /* } */


    return 0;
}

