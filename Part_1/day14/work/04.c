// 从score.txt中查找所有大于90分的学生信息（学号、成绩），
// 并统计学生的数量和平均成绩。

#include <stdio.h>
#include <stdlib.h>
#define STUS 10

typedef struct student
{
    int sid;
    int score;
    struct student *next;
} STU;

// 创建链表
STU *creat_node(STU *head)
{
    STU *pi = head;
    FILE *f = fopen("score.txt", "r");
    for (int i = 0; i < STUS; i++)
    {
        fscanf(f, "%d , %d\n", &(pi->sid), &(pi->score));
        STU *pn = (STU *)malloc(sizeof(STU));
        if (i == 9)
        {
            printf("cs\n");
            pi->next = NULL;
        }
        pi->next = pn;
        pi = pi->next;
    }
    return head;
}

// 查找
void search_node(STU *head)
{
    STU *pi = head;
    int score, cnt = 0, sum_score = 0;
    float avg_score;
    printf("请输入分数线：\n");
    scanf("%d", &score);
    printf("-------------------------\n");
    printf("%d 分以上的学生：\n",score);
    while (pi->next != NULL)
    {
        if (pi->score >= score)
        {
            printf("%d %d\n", pi->sid, pi->score);
            cnt++;
            sum_score += pi->score;
        }
        pi = pi->next;
    }
    avg_score = sum_score / cnt;
    printf("-------------------------\n");
    printf("成绩%d分以上的人数：%d\n平均成绩：%.2f\n",score, cnt, avg_score);
}

// 打印链表
void show_node(STU *head)
{
    int cnt = 1;
    STU *pi = head;
    printf("-------------------------\n");
    while (pi->next != NULL)
    {
        printf("%d  %d %d\n", cnt, pi->sid, pi->score);
        pi = pi->next;
        cnt++;
    }
    printf("-------------------------\n");
}

int main(int argc, char const *argv[])
{
    // 初始化链表头节点
    STU *s = (STU *)malloc(sizeof(STU));
    // 创建链表
    s = creat_node(s);
    // 打印链表
    show_node(s);
    // 查找
    search_node(s);
    // 释放
    free(s);
    return 0;
}
