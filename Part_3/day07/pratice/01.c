#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;

void *printA(void *arg)
{
    char *data = (char *)arg;
    pthread_mutex_lock(&mutex1);
    pthread_mutex_lock(&mutex2);
    printf("%s\n",data);
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex1);
    return NULL;
}

void *printB(void *arg)
{
    char *data = (char *)arg;
    pthread_mutex_lock(&mutex2);
    pthread_mutex_lock(&mutex1);
    printf("%s\n", data);
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex1);
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t threads[2];
    pthread_create(&threads[0], NULL, printA, "hello");
    pthread_create(&threads[1], NULL, printB, "good6");

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);
    pthread_mutex_destroy(&mutex1);
    pthread_mutex_destroy(&mutex2);
    return 0;
}
