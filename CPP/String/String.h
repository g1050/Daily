#pragma once
#include <iostream>
using namespace std;
class String
{
public:
    String();
    String(const char *p);
    String(String &s);
    ~String();

    String& operator= (const char *p);//s4 = "s4";
    String& operator= (const String &s);//s4 = s3;
    char& operator[](int i){
        return this->p[i];
    }
private:
    int length;
    char *p;
};

