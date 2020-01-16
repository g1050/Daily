#ifndef MYSTRING_H
#define MYSTRING_H
#include <cstdlib>
#include <cstring>
class MyString
{
public:
    MyString();
    MyString(const char *p);
    MyString(const MyString &s);
    ~MyString();
private:
    int len;
    char *p;
};

#endif // MYSTRING_H
