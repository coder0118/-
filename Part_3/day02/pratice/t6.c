#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    char buffer[32];
    long len = read(STDIN_FILENO,buffer,32);
    printf("readed data:%s\n",buffer);
    return 0;
}
