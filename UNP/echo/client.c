#include <stdio.h>
#include "unp.h"

void do_something(int sockfd)
{
    char sendline[MAXLINE]; 
    char recvline[MAXLINE];

    while(Fgets(sendline,MAXLINE,stdin) != NULL){
        Writen(sockfd,sendline,strlen(sendline));

        if(Readline(sockfd,recvline,MAXLINE) == 0){
            err_quit("server terminated prematurely");
        }
        Fputs(recvline,stdout);
    }
    return ;
}

int main()
{
    int sockfd; 
    struct sockaddr_in servaddr;

    sockfd = Socket(AF_INET,SOCK_STREAM,0);

    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    Inet_pton(AF_INET,"127.0.0.1",&servaddr.sin_addr);
    Connect(sockfd,(SA*)&servaddr,sizeof(servaddr));

    do_something(sockfd);
    return 0;
}


