// 编写一个程序，创建一个线程，该线程从标准输入读取字符串，然后将字符串逆序输出。
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

pthread_mutex_t mutex;
pthread_cond_t cond;

char inputString[MAX_LENGTH];
int hasInput = 0;

void *reverseString(void *arg)
{
    pthread_mutex_lock(&mutex);
    while (!hasInput)
    {
        pthread_cond_wait(&cond, &mutex);
    }
    int length = strlen(inputString);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", inputString[i]);
    }
    printf("\n");
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    pthread_t thread;
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

    pthread_create(&thread, NULL, reverseString, NULL);

    printf("请输入字符串：\n");
    fgets(inputString, sizeof(inputString), stdin);

    pthread_mutex_lock(&mutex);
    hasInput = 1;
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&mutex);
    pthread_join(thread, NULL);
    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);

    return 0;
}
