#include "String.h"
#include <cstdlib>
#include <cstring>
String::String(const char *p){
    if(p == NULL){
        this->length = 0;
        this->p = new char [length+1];
        strcpy(this->p,"");
        return ;
    }
    this->length = strlen(p);
    this->p = new char [length+1];
    strcpy(this->p,p);
    return ;
}

String::String(){
    this->length = 0;
    this->p = new char[length+1];
    strcpy(this->p,"");
}

String::String(String &s){
    this->length = s.length;
    this->p = new char[length+1];
    strcpy(this->p,s.p);
    return ;
    
}

String::~String(){
    if(p != NULL){
        delete []p;
        p = NULL;
        this->length = 0;
    }
}

String& String::operator=(const char *p){
    //释放旧的内存
    if(this->p != NULL){
        delete []this->p ;
        this->length = 0;
        this->p = NULL;
    }

    //根据p分配内存
    if(p == NULL){
        this->length = 0;
        this->p = new char[length+1];
        strcpy(this->p,"");
    }else{

        this->length = strlen(p);
        this->p = new char[length+1];
        strcpy(this->p,p);
    }
    return *this;
}

String& String::operator=(const String &s){
    //释放旧的内存
    if(this->p != NULL){
        delete []p ;
        this->length = 0;
        this->p = NULL;
    }

    //根据p分配内存
    if(s.p == NULL){
        this->length = 0;
        this->p = new char[length+1];
        strcpy(this->p,"");
    }else{

        this->length = strlen(s.p);
        this->p = new char[length+1];
        strcpy(this->p,s.p);
    }
    return *this;
}
