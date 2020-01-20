#ifndef MYSTRING_H
#define MYSTRING_H
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

class MyString
{
    friend std::ostream &operator<< (std::ostream &out,MyString &s);
    friend std::ostream &operator<< (std::ostream &out,const MyString &s);
    friend std::istream &operator>> (std::istream &in,MyString &s);
public:
    /*************constructor***************/
    MyString(int len = 0);
    MyString(int len,char c);
    MyString(const char *p);
    MyString(char *p);
    MyString(const MyString &s);
    MyString(const char *p, size_t pos, size_t len);
    MyString(const char *p,size_t n);
    ~MyString();
public:
    void resize(size_t n,char ch);
    void resize(size_t n);

public:
    MyString& operator= (const char*p);
    MyString& operator= (const MyString &s);
    MyString& operator= (const char ch);
    char& operator[] (int index)  ;
    bool operator== (const char *ptmp) const ;//This pointer can't be changed.
    bool operator== (const MyString &s) const ;
    bool operator!= (const char *ptmp) const ;
    bool operator!= (const MyString &s) const ;
    bool operator> (const char *ptmp) const;
    bool operator< (const char *ptmp) const;
    bool operator> (const MyString &s) const;
    bool operator< (const MyString &s) const ;

public:
    char *getPointer(){
        return this->p;
    }
    const char *getPointer2(){
        return this->p;
    }

    int size(){
        return this->len;
    }



private:
    int len;
    char *p;
};

#endif // MYSTRING_H
