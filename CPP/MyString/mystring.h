#ifndef MYSTRING_H
#define MYSTRING_H
#include <cstdlib>
#include <cstring>
#include <iostream>

class MyString
{
    friend std::ostream &operator<< (std::ostream &out,MyString &s);
public:
    MyString();
    MyString(const char *p);
    MyString(const MyString &s);
    ~MyString();

public:
    MyString& operator= (const char*p);
    MyString& operator= (const MyString &s);
    char& operator[] (int index)  ;
    bool operator ==(const char *ptmp) const ;//This pointer can't be changed.
    bool operator ==(const MyString &s) const ;
    bool operator !=(const char *ptmp) const ;
    bool operator !=(const MyString &s) const ;
    bool operator >(const char *ptmp) const;
    bool operator <(const char *ptmp) const;
    bool operator >(const MyString &s) const;
    bool operator <(const MyString &s) const ;
private:
    int len;
    char *p;
};

#endif // MYSTRING_H
