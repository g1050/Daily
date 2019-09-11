#include "array.h"
#include "stdio.h"
Array::Array(const Array &ob){//深拷贝    
}

Array::Array(int length){
    if(length < 0){
        this->length = 0;
    }
    else this->length = length;

    p = new int[this->length];
}

Array::~Array(){
    if(p != NULL){
        delete []p;
    }
}

int Array::size(){
    return length;
}

int Array::GetData(int index){
    return p[index];
}

void Array::SetData(int index,int value){
    p[index] = value;
    return ;
}
