#include <stdio.h>
#include <string.h>
#include <pthread.h>

void *show_task(void *name)
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%s 线程 -> %d \n",(char *)name,i);
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    while (1)
    {
        char buf[32];
        fgets(buf, 32, stdin);
        buf[strlen(buf) - 1] = 0;

        if (strncmp(buf, "quit", 4) == 0)
        {
            break;
        }
        pthread_t tid;
        pthread_create(&tid,NULL,show_task,buf);
        pthread_join(tid,NULL);

    }

    return 0;
}
