// #include<stdio.h>


// int main(int argc, char const *argv[])
// {
//     // 打开文件
//     FILE *lrc_f = fopen("./lrc/简单爱.lrc", "r");
//     // 获取文件大小
//     fseek(lrc_f, 0, 2);
//     long file_size;
//     file_size = ftell(lrc_f);
//     rewind(lrc_f); // 指向复位
//     printf("%ld B\n", file_size);
//     // 分配内存并存入歌词
//     char *s = malloc(file_size);
//     fread(s, file_size, 1, lrc_f);
//     printf("%s\n", s);

//     // 定义指针数组指向每行的首地址
//     int n = 0;
//     char *p[200];
//     p[n] = strtok(s, "\n");
//     while (strtok(NULL, "\n") != NULL)
//     {
//         n++;
//         p[n] = strtok(NULL, "\n");
//     }
//     // 测试打印输出
//     for (int i = 0; i < n; i++)
//     {
//         printf("第%d行：\n", i + 1);
//         printf("%s\n", p[i]);
//     }

//     // 解析歌词并创建链表
//     LRC *lr;
//     int min, sec, msec, time[100];
//     char(*lrs)[100];
//     int line;
//     int nn = 0;
//     for (int i = 4; i < n; i++)
//     {
//         // 解析歌词
//         // 时间
//         sscanf(p[i], "[%d:%d.%d]", &min, &sec, &msec);
//         time[i] = min * 60000 + sec * 1000 + msec * 10;
//         printf("%d %d %d\n", min, sec, msec);
//         printf("%d\n", time[i]);

//         // 歌词

//         sscanf(p[i], "%*8s%s", lrs[i]);
//         printf("%s\n", lrs[i]);
//         nn++;
//         // 行号
//         //  创建链表
//     }

//     return 0;
// }

// main.c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "other.h"

void mplayer_play()
{
    pid_t pid;
    pid = fork(); // 创建子进程
    if (pid < 0)  // 创建失败
    {
        perror("fork");
    }
    else if (pid == 0) // 子进程中
    {
        close(1);
        close(2);
        execlp("mplayer", "mplayer", "-slave", "-quiet", "./简单爱.mp3", NULL);
        exit(0);
    }
}

int main()
{
    char *temp = NULL;
    char *song_line[100];
    int line_num, i;
    char *four[50];
    temp = open_file(); // open_file 打开文件
    LRC *head = NULL;
    line_num = strtok_deal(temp, song_line); // hang_strtok
    four_deal(song_line, four);
    line_num -= 4;
    mplayer_play();
    for (i = 0; i < line_num; i++)
    {
        song_line[i] = song_line[i + 4];
    }
    head = divide_deal(song_line, line_num);
    song_print(head, four);
    return 0;
}
