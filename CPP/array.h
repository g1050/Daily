#pragma once

class Array
{
public:
    Array(int length);
    Array(const Array&ob);
    ~Array();
    void SetData(int  index,int value);
    int GetData(int index);
    int size();
    int& operator[](int i);
private:
    int length;
    int *p;
};

