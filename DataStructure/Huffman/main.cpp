#include <iostream>
#include "Huffman.h"
#include <map>
using namespace std;
int main()
{
    string s1,s2;
    map<char,int> mp ;

    HuffmanTree huffmantree;
    File file;
    cout <<  "源文件名字:" << endl;
    cin >> s1;
    cout << "压缩文件名字:" << endl;
    cin >> s2;
    huffmantree.buildTree(file.getMap(s1));
    vector<string> v = huffmantree.getVector();
    file.encoded(s1,s2,v);  
    /* for(auto it = mp.begin() ; it != mp.end() ;it++){ */
    /*     cout << (int)it->first << " " << it->second << endl; */
    /* } */


    return 0;
}

