#pragma once
#include <fstream>
#include "Huffman.h"
using namespace std;
class File
{
private:
    ifstream in;
    ofstream out;
public:
    File() {}
    ~File() {}
    map<char,int> getMap(const string &s); 
};

