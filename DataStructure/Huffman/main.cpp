#include <iostream>
#include "Huffman.h"
#include <map>
using namespace std;
int main()
{
    map<char,int> mp = {
        {'a',50},
        {'b',20},
        {'c',30},
        {'d',40},
        {'e',10}
    };

    HuffmanTree huffmantree;
    huffmantree.input(mp);
    return 0;
}

