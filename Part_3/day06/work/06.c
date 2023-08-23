
// 编写一个程序，由主线程从键盘接收输入的网址（如http : // www.baidu.com），
// 由子线程完成网址的下载并写入到tmpN.html临时文件中，并在子线程中打印输出结果。输入exit时，退出程序。
// 【提示】基于execlp() 函数执行`curl 网址 > tmp1.html`, 其中N是第几次请求。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t mutex = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

int request_count = 1;


void *downloadAndWrite(void *url)
{
    char command[100];
    
}


int main(int argc, char const *argv[])
{
    pthread_t thread;
    char url[100];

    while (1)
    {
        printf("请输入网址：（exit退出）\n");
        fgets(url, sizeof(url), stdin);
        url[strcspn(url, "\n")] == '\0';

        if (strncmp(url, "exit", 4) == 0)
        {
            break;
        }

        pthread_create(&thread,NULL,downloadAndWrite,url);
    }

    return 0;
}
