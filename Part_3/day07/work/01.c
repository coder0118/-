// 编写一个程序，创建两个线程，一个线程负责打印奇数，另一个线程负责打印偶数，
// 要求打印的结果为1、2、3、4、5、6...，直到指定的最大值。
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

int max_value = 10;
int current_value = 1;

void *printOdd(void *arg)
{
    while (1)
    {
        pthread_mutex_lock(&mutex);

        if (current_value > max_value)
        {
            pthread_mutex_unlock(&mutex);
            pthread_cond_signal(&cond);
            break;
        }

        if (current_value % 2 == 0)
        {
            pthread_cond_wait(&cond, &mutex);
        }
        else
        {
            printf("%d ", current_value);
            if (current_value%10==0)
            {
                printf("\n");
            }
            current_value++;
            pthread_cond_signal(&cond);
        }

        pthread_mutex_unlock(&mutex);
    }

    pthread_exit(NULL);
}

void *printEven(void *arg)
{
    while (1)
    {
        pthread_mutex_lock(&mutex);

        if (current_value > max_value)
        {
            pthread_mutex_unlock(&mutex);
            pthread_cond_signal(&cond);
            break;
        }

        if (current_value % 2 != 0)
        {
            pthread_cond_wait(&cond, &mutex);
        }
        else
        {
            printf("%d ", current_value);
            if (current_value % 10 == 0)
            {
                printf("\n");
            }
            current_value++;
            pthread_cond_signal(&cond);
        }

        pthread_mutex_unlock(&mutex);
    }

    pthread_exit(NULL);
}

int main()
{
    pthread_t thread1, thread2;

    printf("请输入最大值：");
    scanf("%d", &max_value);

    pthread_create(&thread1, NULL, printOdd, NULL);
    pthread_create(&thread2, NULL, printEven, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_cond_destroy(&cond);
    pthread_mutex_destroy(&mutex);

    return 0;
}