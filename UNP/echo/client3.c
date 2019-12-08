#include <stdio.h>
#include "unp.h"

void do_something(FILE *fp,int sockfd)
{
    int maxdfp1,stdineof;
    fd_set rset;
    char buf[MAXLINE];
    int n;

    stdineof = 0;
    FD_ZERO(&rset);
    for(;;){
        if(stdineof == 0)
            FD_SET(fileno(fp),&rset);
        FD_SET(sockfd,&rset);
        maxdfp1 = max(fileno(fp),sockfd) + 1;
        Select(maxdfp1,&rset,NULL,NULL,NULL);

        if(FD_ISSET(sockfd,&rset)){//sockfd is readable
            if(Readline(sockfd,buf,MAXLINE) == 0){
                err_quit("server terminated prematurely");
            }
            Write(fileno(stdout),buf,n);
        }

        if(FD_ISSET((fileno(fp)),&rset)){//input is readable
            if((n = Read(fileno(fp),buf,MAXLINE)) == 0){
               stdineof = 1;
               Shutdown(sockfd,SHUT_WR);
               FD_CLR(fileno(fp),&rset);
               continue;
            }

            Writen(sockfd,buf,n);
        }

    }
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

    do_something(stdin,sockfd);
    return 0;
}


