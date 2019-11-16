#include <stdio.h>
#include "unp.h" 
int main(int argc,char **argv)
{
    int sockfd,n;//sockfd套接字描述符,n的作用是在收到的消息的结尾补充一个结束符号
    char recvline[MAXLINE+1];//接受服务端发送的消息
    struct sockaddr_in servaddr;
    

    if(argc != 2)
        err_quit("usage:a.out <IPaddress>");
    
    if((sockfd = socket(AF_INET,SOCK_STREAM,0)) < 0)
        err_sys("soclet error");
    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(8080);

    if(inet_pton(AF_INET,argv[1],&servaddr.sin_addr) <= 0)
        err_quit("inet_ptono error for %s",argv[1]);
    if(connect(sockfd,(SA*)&servaddr,sizeof(servaddr)) < 0)
        err_sys("connect error");

    while((n = read(sockfd,recvline,MAXLINE)) > 0){
        recvline[n] = 0;
        if(fputs(recvline,stdout) == EOF){
            err_sys("fputs error");
        }
    }
    if(n < 0)
        err_sys("read error");

    //exit(0);
    return 0;
}

