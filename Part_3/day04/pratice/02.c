#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd[2];
    if (pipe(fd)==-1)
    {
        perror("pipe");
        return 1;
    }

    int pid = fork();

    if (pid==0)
    {
        close(fd[0]);
        dup2(fd[1],1);
        execlp("expr","expr","4","+","5",NULL);
        close(fd[1]);
        _exit(0);
    }else if (pid>0)
    {
        close(fd[1]);
        char buf[10];
        int len = read(fd[0],buf,10);
        buf[len-1]='\0';
        printf("%s\n",buf);
        close(fd[0]);
    }
    return 0;
}
