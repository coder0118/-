// 编写一个程序，创建两个线程，一个线程打印奇数，另一个线程打印偶数，要求交替打印1到100的数字。
#include <stdio.h>
#include <pthread.h>

#define MAX_NUMBER 100

pthread_mutex_t mutex;
pthread_cond_t cond;

int number = 1;

void *printOdd(void *arg)
{
    while (number < MAX_NUMBER)
    {
        pthread_mutex_lock(&mutex);
        if (number % 2 != 0)
        {
            printf("奇数：%d\n", number);
            number++;
        }
        pthread_cond_signal(&cond);
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

void *printEven(void *arg)
{
    while (number <= MAX_NUMBER)
    {
        pthread_mutex_lock(&mutex);
        while (number % 2 != 0)
        {
            pthread_cond_wait(&cond, &mutex);
        }
        if (number % 2 == 0)
        {
            printf("偶数：%d\n", number);
            number++;
        }
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    pthread_t threads[2];

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

    pthread_create(&threads[0], NULL, printOdd, NULL);
    pthread_create(&threads[1], NULL, printEven, NULL);

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);
    return 0;
}
