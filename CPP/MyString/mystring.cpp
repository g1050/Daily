#include "mystring.h"

MyString::MyString()
{
    this->len = 0;
    this->p = new char[this->len + 1];
    strcpy(this->p,"");
}

MyString::MyString(const char *p)
{
    if(p == NULL){
        this->len = 0;
        this->p = new char[this->len + 1];
        strcpy(this->p,"");
        return ;
    }

    this->len = strlen(p);
    this->p = new char[this->len + 1];
    strcpy(this->p,p);

}

MyString::MyString(const MyString &s)
{
    this->len = s.len;
    this->p = new char[this->len + 1];
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

MyString &MyString::operator=(const char *p)
{
    //delete old memory
    if(this->p != NULL){
        delete []this->p;
        this->len = 0;
    }

    if(p == NULL){
        this->len = 0;
        this->p = new char [len + 1];
        strcpy(this->p,NULL);
    }else{
        this->len = strlen(p);
        this->p = new char[len + 1];
        strcpy(this->p,p);
    }

    return *this;
}

MyString &MyString::operator=(const MyString &s)
{
    //delete old memory
    if(this->p != NULL){
        delete []p;
        this->len = 0;
    }

    this->len = strlen(p);
    this->p = new char[len + 1];
    strcpy(this->p,s.p);

    return *this;
}

char &MyString::operator[](int index)
{
    return this->p[index];
}

bool MyString::operator ==(const char *ptmp) const
{
   if(ptmp == NULL ){
      if(this->len == 0) return true;
      else return false;
   }
   else{
       if(!strcmp(this->p,ptmp)) {
            return true;
       }else{
            return false;
       }
   }
}

bool MyString::operator ==(const MyString &s) const
{
    if(!strcmp(this->p,s.p)){
        return true;
    }else{
        return false;
    }
}

bool MyString::operator !=(const char *ptmp) const
{
    return !(*this == ptmp);
}

bool MyString::operator !=(const MyString &s) const
{
    return !(*this == s);
}

bool MyString::operator >(const char *ptmp) const
{
    return strcmp(this->p,ptmp) > 0 ? true : false;
}

bool MyString::operator <(const char *ptmp) const
{
    return strcmp(this->p,ptmp) < 0 ? true : false;
}

bool MyString::operator >(const MyString &s) const
{
    return strcmp(this->p,s.p) > 0 ? true : false;
}

bool MyString::operator <(const MyString &s) const
{
    return strcmp(this->p,s.p) < 0 ? true : false;
}

std::ostream& operator<<(std::ostream &out, MyString &s)
{
   out << s.p;
   return out;
}
