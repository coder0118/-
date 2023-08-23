// 编写一个程序，创建两个线程，一个线程负责向共享缓冲区写入数据，
// 另一个线程负责从缓冲区读取数据。要求实现线程间的同步和互斥，
// 确保读取线程只能在缓冲区有数据时才能读取，写入线程只能在缓冲区为空时才能写入。
// 【提示】缓冲区可以在main函数中创建char 数组，并传入到线程中。

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

#define BUFFER_SIZE 10

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_read = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond_write = PTHREAD_COND_INITIALIZER;
char buffer[BUFFER_SIZE];
int buffer_count = 0;

void *writeToBuffer(void *arg)
{
    int data = 1;

    while (1)
    {
        pthread_mutex_lock(&mutex);

        if (buffer_count == BUFFER_SIZE)
        {
            pthread_cond_wait(&cond_write, &mutex);
        }
        int rad = rand() % 10 + 1, a,i=0;
        printf("尝试写入%d次\n", rad);
        while (i < rad)
        {
            a = buffer_count;
            buffer[buffer_count] = data;
            buffer_count++;
            printf("写入线程写入数据：%d\n", data);
            data++;
            i++;
            sleep(1);
            if (buffer_count >= BUFFER_SIZE - 1)
            {
                printf("成功写入%d次\n", buffer_count - a);
                break;
            }
        }

        pthread_mutex_unlock(&mutex);
        pthread_cond_signal(&cond_read);
    }

    pthread_exit(NULL);
}

void *readFromBuffer(void *arg)
{
    while (1)
    {
        pthread_mutex_lock(&mutex);

        if (buffer_count == 0)
        {
            pthread_cond_wait(&cond_read, &mutex);
        }

        int data = buffer[buffer_count - 1];
        buffer_count--;
        printf("读取线程读取数据：%d\n", data);

        if (buffer_count == 0)
        {
            pthread_cond_signal(&cond_write);
        }
        pthread_mutex_unlock(&mutex);
        sleep(1);
    }

    pthread_exit(NULL);
}

int main()
{
    srand(time(NULL));

    pthread_t writeThread, readThread;

    pthread_create(&writeThread, NULL, writeToBuffer, NULL);
    pthread_create(&readThread, NULL, readFromBuffer, NULL);

    pthread_join(writeThread, NULL);
    pthread_join(readThread, NULL);

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond_read);
    pthread_cond_destroy(&cond_write);

    return 0;
}