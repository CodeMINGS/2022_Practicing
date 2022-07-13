#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    int fd =open(argv[1],O_RDWR| O_CREAT);
    if(fd==-1)
    {
        printf("open error\n");
        return -1;

    }
    printf("fd=%d\n",fd);

    unsigned char recvbuf[30]={0};
    int r=read(fd, recvbuf,9);
    if(fd==-1)
    {
        perror("read error\n");
        return -1;
    }

    printf("recvbuf=%s\n",recvbuf);

}