#include "file.h"

map<char,int> File::getMap(const string &s)
{
    map<char,int> mp;
    char ch;
    /* out.open("tmp.txt",ios::out | ios::binary); */
    in.open(s,ios::in | ios::binary);
    while(in.peek() != EOF){
        ch = in.get();
        /* out <<  ch; */
        /* cout << (int)ch << endl; */
        if(!mp.count(ch)){
            mp[ch] = 1;//初始化
        }else{
            mp[ch]++;
        }
    }
    in.close();

    return mp;
}
