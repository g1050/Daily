#pragma once
#include <fstream>
#include "Huffman.h"
#include <cmath>
using namespace std;
class File
{
private:
    int strToInt(const string &tmp){
        int num = 0; 
        for(int i = 0;i<32;i++){
            if(tmp[i] == '1')
                num += pow(2,31-i);
        }            
        return num;
    }
public:
    File() {}
    ~File() {}
    map<char,int> getMap(const string &s); 
    void encoded(string src,string des,vector<string> v);//src是源文件，des是压缩后的文件
    void decoding(string src,string des,vector<string> v);//src是压缩文件,des是解压后的文件
};

