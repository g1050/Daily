#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;

    char num1[4],num2[4]; 
    
    char *p = (char *)&a; 
    for(int i = 3;i >= 0;i--){
        num1[i] = *p;
        p++;
    }

    char *q = (char *)&b; 
    for(int i = 3;i >= 0;i--){
        num2[i] = *q;
        q++;
    }

    int c = *(int*)num1;
    int d = *(int*)num2;

    printf("%d\n",c+ d);

    return 0;
}

