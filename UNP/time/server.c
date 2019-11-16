#include <stdio.h>
#include <unp.h>
#include "threadpool.h"

int listenfd,connfd; //监听套接字 和 链接的客户端套接字
struct sockaddr_in servaddr; //sockaddr是其前身，现在大多使用sockaddr_in
char buff[MAXLINE]; //缓冲区用来存放要发送的数据
time_t ticks;


void f()
{
    snprintf(buff,sizeof(buff),"%.24s\r\n",ctime(&ticks));
    Write(connfd,buff,strlen(buff));
    sleep(100);
    Close(connfd);



    return ;
}
int main()
{

    listenfd = Socket(AF_INET,SOCK_STREAM,0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htons(0);
    servaddr.sin_port = htons(8080);

    threadpool_init(10);
    
    Bind(listenfd,(SA*)&servaddr,sizeof(servaddr));

    Listen(listenfd,LISTENQ);

    for(;;){
        connfd = Accept(listenfd,(SA*)NULL,NULL);
        ticks = time(NULL);
        pool_add_task(f,NULL);
    }
    threadpool_destroy();
    return 0;
}

