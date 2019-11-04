#include <iostream>
#include "Huffman.h"
#include <map>
using namespace std;
int main()
{
    string s;
    map<char,int> mp ;

    HuffmanTree huffmantree;
    File file;
    cin >> s;
    mp = file.getMap(s);

    /* for(auto it = mp.begin() ; it != mp.end() ;it++){ */
    /*     cout << (int)it->first << " " << it->second << endl; */
    /* } */

    /* huffmantree.buildTree(file.getMap(s)); */

    return 0;
}

