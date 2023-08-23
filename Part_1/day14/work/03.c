// 按行读取score.txt文件的所有内容，
// 并生成有序的链表，且打印链表数据。
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
        pi->next = pn;
        pi = pi->next;
    }
    return head;
}

// 链表排序
STU *sort_node(STU *head)
{
    STU *pi = head;
    if (head == NULL)
    {
        return NULL;
    }
    while (pi->next != NULL)
    {
        STU *pmin = pi;
        STU *pj = pi->next;
        while (pj != NULL)
        {
            if (pmin->score > pj->score)
            {
                pmin = pj;
            }
            pj = pj->next;
        }
        if (pmin != pi)
        {
            STU *tmp = malloc(sizeof(STU));
            *tmp = *pi;
            *pi = *pmin;
            *pmin = *tmp;

            tmp->next = pi->next;
            pi->next = pmin->next;
            pmin->next = tmp->next;

            free(tmp);
        }
        pi = pi->next;
    }
    return NULL;
}

// 打印链表
void show_node(STU *head)
{
    int cnt = 1;
    STU *pi = head;
    printf("-------------------------\n");
    for (int i = 0; i < STUS; i++)
    {
        printf("%d  %d %d\n", cnt, pi->sid, pi->score);
        pi = pi->next;
        cnt++;
    }
}

int main(int argc, char const *argv[])
{
    // 初始化链表头节点
    STU *s = (STU *)malloc(sizeof(STU));
    // 创建链表
    s = creat_node(s);
    // 打印链表
    show_node(s);
    // 链表排序
    sort_node(s);
    // 打印链表
    show_node(s);
    return 0;
}
