#include <stdio.h>
#include <unp.h>

void do_something(int connfd)
{
    ssize_t n;
    char buf[MAXLINE];

again:
    while((n = readline(connfd,buf,MAXLINE)) > 0){
        printf("%s\n",buf);
        printf("--------------------------\n");
        Writen(connfd,buf,n);
    }

    if(n < 0 && errno == EINTR)
        goto again;
    else if(n < 0)
        err_sys("str_echo:read error");

    return ;
}
int main()
{
    int listenfd,connfd;
    pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr,servaddr;

    listenfd = Socket(AF_INET,SOCK_STREAM,0);

    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(SERV_PORT);

    Bind(listenfd,(SA*)&servaddr,sizeof(servaddr));

    Listen(listenfd,LISTENQ);

    for(;;){
        clilen = sizeof(cliaddr);
        connfd = Accept(listenfd,(SA*)&servaddr,&clilen);
        if((childpid = fork()) == 0){//child process
            Close(listenfd);//监听套接字引用计数减少1
            do_something(connfd);
            close(connfd);
            exit(0);
        }
        else{//parent process
            close(connfd);//彻底关闭客户端套接字
        }
    }


    return 0;
}

