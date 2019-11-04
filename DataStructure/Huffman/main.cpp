#include <iostream>
#include "Huffman.h"
#include <map>
using namespace std;
int main()
{
    string s,s2;
    map<char,int> mp ;

    HuffmanTree huffmantree;
    File file;
    cout <<  "源文件名字:" << endl;
    cin >> s;
    cout << "压缩文件名字:" << endl;
    cin >> s2;
    huffmantree.buildTree(file.getMap(s));
    file.encoded(s,s2,huffmantree.getVector());  
    /* for(auto it = mp.begin() ; it != mp.end() ;it++){ */
    /*     cout << (int)it->first << " " << it->second << endl; */
    /* } */


    return 0;
}

