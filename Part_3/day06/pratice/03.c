#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *task1(void *data)
{

    int n = atoi((char *)data);
    int ret = 1;
    while(n)
    {
        ret *=n--;
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    pthread_t tid;
    pthread_create(&tid,NULL,task1,argv[1]);
    pthread_detach(tid);
    sleep(2);
    printf("___over___\n");
    return 0;
}
