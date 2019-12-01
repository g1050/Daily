#include <stdio.h>
#include <malloc.h>
void swap()
{

}

int main()
{
    char *p = (char*)malloc(100);
    free(p);
    return 0;
}

