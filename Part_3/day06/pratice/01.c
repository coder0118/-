#include <stdio.h>
#include <pthread.h>

int main(int argc, char const *argv[])
{
    printf("当前线程号 ： %ld\n",pthread_self());
    getchar();
    return 0;
}
