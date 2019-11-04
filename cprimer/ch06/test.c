#include <stdio.h>
#include <stdlib.h>

void f(int **p)
{
    static int a = 6;
    *p = &a;
    a++;
    return ;
}

void g(char **p)
{
    *p = "Hello Linux\n";
}

int main()
{
    int *p1;
    char *p2 ;
    g(&p2);
    f(&p1);
    f(&p1);
    printf("%d\n",*p1);
    printf("%s",p2);
    return 0;
}

