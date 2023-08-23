#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
// #include "start_mplayer.h"
#include "lrc.h"

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
        execlp("mplayer", "mplayer", "-slave", "-quiet", "./song/简单爱.mp3" ,NULL);
        exit(0);
    }
}

int main()
{
    char *temp = NULL;
    char *song_line[100];
    int line_num, i;
    char *four[50];
    char *song_path;
    temp = open_file(); // open_file 打开文件
    LRC *head = NULL;
    
    mplayer_play();

    line_num = strtok_deal(temp, song_line); // hang_strtok
    four_deal(song_line, four);
    line_num -= 4;
    for (i = 0; i < line_num; i++)
    {
        song_line[i] = song_line[i + 4];
    }
    head = divide_deal(song_line, line_num);
    song_print(head, four);
    return 0;
}
