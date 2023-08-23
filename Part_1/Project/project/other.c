#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "other.h"
char *open_file()
{
    FILE *fp;
    fp = fopen("简单爱.lrc", "rb");
    if (fp == NULL)
    {
        printf("NULL!\n");
        return 0;
    }
    fseek(fp, 0L, SEEK_END); // 光标定位
    int len = ftell(fp);     // 读取字节以便申请空间
    rewind(fp);
    char *f = (char *)malloc(len);
    fread(f, len, 1, fp); // 读取
    return f;
}
int strtok_deal(char *f, char **song_line)
{
    char *temp = NULL;
    int k = 0;
    temp = strtok(f, "\r\n"); // 遇‘\r''\n'切割
    while (temp)
    {
        song_line[k++] = temp; // 每行读入
        temp = strtok(NULL, "\r\n");
    }
    return k;
}

void four_deal(char **song_line, char *four[50])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        char *temp = strtok(song_line[i], "[]"); // 遇'[]'的切割
        four[i] = temp;
    }
}

LRC *init()
{
    LRC *p = (LRC *)malloc(sizeof(LRC));
    p = NULL;
    p->next = NULL;
    return p;
}
void insert(LRC *p, LRC **head)
{ // 一边构建链表一边排序（对链表要求较高）
    if (*head == NULL)
    {
        *head = p;
        return;
    }
    LRC *temp = *head, *mid = *head;
    while (temp->next && temp->time < p->time)
    {
        mid = temp;
        temp = temp->next;
    }
    if (temp->time >= p->time)
    {
        p->next = temp;
        mid->next = p;
        return;
    }
    else
    {
        temp->next = p;
        p->next = NULL;
        return;
    }
}

LRC *divide_deal(char **song_line, int n)
{
    char song[100][100], mid[100][100] = {0};
    char *temp;
    LRC *head = NULL;
    int time[50], k = 0, i, m = 0, q = 0, flag[100];
    for (i = 0; i < n; i++)
    {
        temp = strtok(song_line[i], "[]");
        while (temp)
        {
            strcpy(mid[k++], temp);
            temp = strtok(NULL, "[]");
        }
    }
    for (i = 0; i < k; i++)
    {
        if (!isdigit(mid[i][0]))
        {
            strcpy(song[q++], mid[i]);
        }
    }
    int j = 0;
    for (i = 0; i < k; i++)
    {
        if (isdigit(*mid[i]))
        {
            char hh[5], mm[5], ss[5];
            LRC *p = (LRC *)malloc(sizeof(LRC));
            p->time = sscanf(mid[i], "%2s:%2s.%2s", hh, mm, ss);
            // 这种格式可以让时间以标准形式输出
            p->time = atoi(hh) * 60 + atoi(mm);
            // 将时间转化为秒存储到链表中
            p->lrc_num = ++m;
            strcpy(p->lrc_buf, song[j]);
            insert(p, &head); // 找准时机，插入链表
        }
        else
            j++;
    }
    return head;
}
void time_delay(int sec)
{
    int s_time, e_time;
    s_time = time(NULL);
    while (1)
    {
        e_time = time(NULL);
        if (e_time == s_time + sec)
            break;
    }
}
void clear_screen(void)
{
    printf("\033[2J");
    fflush(stdout);
}
void set_fg_color(int color)
{
    printf("\033[%dm", color);
    fflush(stdout);
}
void set_bg_color(int color)
{
    printf("\033[%dm", (color + 10));
    fflush(stdout);
}
void cusor_moveto(int x, int y)
{
    printf("\033[%d;%dH", y, x);
    fflush(stdout);
}
void song_print(LRC *head, char **four)
{
    int num = 0, y = 0;
    LRC *p_mov = head;
    LRC *p_mov2;
    LRC *p_mov_front = head, *p_mov_front2;
    int i, flag = 0;
    while (1)
    {
        clear_screen();
        y = 1;
        for (i = 0; i < 4; i++)
        {
            cusor_moveto(34, y++);
            printf("\t\t\t%s\n", four[i]);
        }
        printf("\n");
        cusor_moveto(34, y++);
        printf("\t\t\t  %02d:%02d\n", num / 60, num % 60);
        printf("\n");

        if (flag < 4)
            p_mov_front = head;
        if (num == p_mov->time)
        {
            p_mov = p_mov->next;
            flag++;
            if (flag > 4)
                p_mov_front = p_mov_front->next;
        }
        p_mov2 = p_mov;
        p_mov_front2 = p_mov_front;
        while (p_mov_front2 != p_mov)
        {
            cusor_moveto(45, y++);
            printf("\t%s\n", p_mov_front2->lrc_buf);
            p_mov_front2 = p_mov_front2->next;
        }
        for (i = 0; i < 5; i++)
        {
            if (i == 0)
            {
                set_fg_color(31);
                set_bg_color(30);
            }
            else
            {
                set_fg_color(37);
                set_bg_color(30);
            }
            if (p_mov2 != NULL)
            {
                cusor_moveto(45, y++); // 光标控制
                printf("\t%s\n", p_mov2->lrc_buf);
                p_mov2 = p_mov2->next;
            }
        }
        if (p_mov == NULL)
            break;
        time_delay(1);
        num++;
    }
}
