#include "mystring.h"

MyString::MyString()
{
    this->len = 0;
    this->p = (char *)malloc(this->len + 1);
    strcpy(this->p,"");
}

MyString::MyString(const char *p)
{
    if(p == NULL){
        this->len = 0;
        this->p = (char *)malloc(this->len + 1);
        strcpy(this->p,"");
        return ;
    }

    this->len = strlen(p);
    this->p = (char *)malloc(this->len + 1);
    strcpy(this->p,p);


}

MyString::MyString(const MyString &s)
{
    this->len = s.len;
    this->p = (char*)malloc(len+1);
    strcpy(this->p,s.p);
    return ;
}

MyString::~MyString()
{
   if(this->p != NULL){
       delete []p;
       this->p = NULL;
       this->len = 0;
       return ;
   }
}
