// 编写一个程序，开启二个线程，第一个线程向终端输出A，第二个线程向终端输出B，每个线程打印10遍。
#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 2
#define NUM_ITERATIONS 10

void *printA(void *arg)
{
    for (int i = 0; i < NUM_ITERATIONS; i++)
    {
        printf("A\n");
    }
    pthread_exit(NULL);
}

void *printB(void *arg)
{
    for (int i = 0; i < NUM_ITERATIONS; i++)
    {
        printf("B\n");
    }
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    pthread_t threads[NUM_THREADS];

    pthread_create(&threads[0], NULL, printA, NULL);

    pthread_create(&threads[1], NULL, printB, NULL);

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    return 0;
}
