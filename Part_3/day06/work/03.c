// 编写一个程序，创建一个线程，该线程计算并打印斐波那契数列的前n项，n由用户输入
#include <stdio.h>
#include <pthread.h>

void *fib(void *arg)
{
    int n = *(int *)arg;
    int fi[n];

    fi[0] = 0;
    fi[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fi[i] = fi[i - 1] + fi[i - 2];
    }
    printf("斐波那契数列的前%d项为：\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",fi[i]);
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("请输入：\n");
    scanf("%d", &n);
    pthread_t thread;
    pthread_create(&thread, NULL, fib, &n);

    pthread_join(thread, NULL);
    return 0;
}
