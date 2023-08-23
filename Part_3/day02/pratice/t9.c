#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int n = 100;
    int total = 0;

    int pid = fork();
    if(pid<0)
    {
        perror("fork");
        return 1;
    }else if (pid ==0)
    {
        
    }



    return 0;
}
