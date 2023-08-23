/*
 * @Author: mikey.zhaopeng
 * @Date: 2023-08-22 15:44:13
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2023-08-22 15:57:32
 */

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

sem_t sem;

void *task1(void *money)
{
}

void *task2(void *money)
{
}

int main(int argc, char const *argv[])
{
    sem_init(&sem, 0, 1);
    
    int money = 1000;

    pthread_t threads[2];

    pthread_create(&threads[0], NULL, task1, &money);
    pthread_create(&threads[1], NULL, task2, &money);

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);
    return 0;
}
