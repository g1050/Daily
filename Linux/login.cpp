#include <iostream>
#include <unistd.h>
#define MAXSIZE 1024
using namespace std;
int main()
{
    char username[MAXSIZE];

    cout << "请输入用户名:";
    scanf("%s",username);
    /* cout << "请输入密码:"; */
    char *passwd = getpass("请输入密码:");

    printf("用户名是:%s\n",username);
    printf("密码是:%s\n",passwd);
    return 0;
}

