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
