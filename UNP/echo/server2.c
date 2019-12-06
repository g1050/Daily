#include <stdio.h>
#include <unp.h>

void do_something(int connfd)
{
    long arg1,arg2;
    ssize_t n;
    char line[MAXLINE];

    for(;;){
        if((n = Readline(connfd,line,MAXLINE)) == 0){
            return ;
        }
        if(sscanf(line,"%ld %ld",&arg1,&arg2) == 2){
            snprintf(line,sizeof(line),"%ld\n",arg1+arg2);
        }
        else{
            snprintf(line,sizeof(line),"input error");
        }

        n = strlen(line);
        Writen(connfd,line,n);
    }
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

