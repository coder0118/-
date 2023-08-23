#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{

    int fd[2];
    if (pipe(fd) == -1)
    {
        perror("pipe");
        exit(1);
    }

    int pid = fork();
    if (pid == 0)
    {
        close(fd[1]);
        dup2(fd[0], 0);
        execlp("grep", "grep", "bash", NULL);
        close(fd[0]);
        _exit(0);
    }
    else if (pid > 0)
    {
        close(fd[0]);
        dup2(fd[1], 1);
        execlp("ps", "ps", "-A", NULL);
        close(fd[1]);
    }

    return 0;
}
