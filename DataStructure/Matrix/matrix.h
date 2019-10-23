#include <iostream>
#define MAXSIZE 1000
struct Triple
{
    int row,col;
    int value;
};

struct TSMATRIX
{
    Triple data[MAXSIZE+1];
    int row,col,nums;
};

class Matrix
{
public:
    void printMenu();
    TSMATRIX inputMatrix();
    void PrintMatrix();
    void finElement();
private:
    TSMATRIX m1,m2,res;    
};

