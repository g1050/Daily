#include <iostream>

class Y;
class X;

class Y
{
    X* p;
};

class X
{
    Y y;
};

int main()
{
    return 0;
}

