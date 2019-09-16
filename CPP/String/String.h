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

private:
    int length;
    char *p;
};

