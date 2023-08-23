// 学生信息管理系统
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int sid;
    char name[32];
    char sex[8];
    int age;
    struct student *next;
} STU;

// 遍历显示
STU *show_node(STU *head)
{
    STU *pi = head;
    if (pi == NULL)
    {
        printf("未查找到任何信息！\n");
        return head;
    }
    else
    {
        while (pi != NULL)
        {
            printf("----------%d   %s   %s   %d----------\n", pi->sid, pi->name, pi->sex, pi->age);
            pi = pi->next;
        }
    }
    return head;
}

// 添加
STU *add_node(STU *head)
{
    STU *pi = head;
    STU *pn = (STU *)malloc(sizeof(STU));
    printf("\n请输入学生信息：  学号  姓名  性别  年龄\n");
    scanf("%d %s %s %d", &(pn->sid), pn->name, pn->sex, &(pn->age));
    if (head == NULL)
    {
        printf("添加成功！\n");
        return pn;
    }
    else
    {
        while (pi->next != NULL)
        {
            pi = pi->next;
        }
        pi->next = pn;
        printf("添加成功！\n");
        pi->next->next=NULL;
    }
    return head;
}

// 删除
STU *delete_node(STU *head)
{
    STU *pi = head;
    int sid;
    printf("请输入要删除学生的学号：\n");
    scanf("%d", &sid);
    if (head == NULL)
    {
        printf("数据为空，删除失败！\n");
        return head;
    }
    else
    {
        if (head->next == NULL && head->sid == sid)
        {
            free(head);
            printf("删除成功！\n");
            return NULL;
        }
        else
        {
            while (pi->next != NULL && pi->next->sid != sid)
            {
                pi = pi->next;
            }
            if (pi->next->sid == sid)
            {
                STU *pn = pi->next;
                pi->next = pi->next->next;
                free(pn);
                printf("删除成功！\n");
                return head;
            }
            else
            {
                printf("未查到此信息，删除失败！\n");
                return head;
            }
        }
    }
}

// 查找
STU *search(STU *head)
{
    STU *pi = head;
    int sid;
    printf("请输入要查找学生的学号：\n");
    scanf("%d", &sid);
    if (head == NULL)
    {
        printf("信息为空，未找到！\n");
        return NULL;
    }
    if (head->sid == sid)
    {
        printf("%d %s %s %d\n", head->sid, head->name, head->sex, head->age);
        return head;
    }
    else
    {
        while (pi->next != NULL && pi->next->sid != sid)
        {
            pi = pi->next;
        }
        if (pi->next->sid == sid)
        {
            printf("%d %s %s %d\n", pi->next->sid, pi->next->name, pi->next->sex, pi->next->age);
            return head;
        }
        else
        {
            printf("未找到学生信息！\n");
            return head;
        }
    }
}

// 修改
STU *modification_node(STU *head)
{
    STU *pi = head;
    int sid;
    printf("请输入要修改学生的学号：\n");
    scanf("%d", &sid);
    if (head == NULL)
    {
        printf("无数据，无法修改！\n");
        return NULL;
    }
    else if (head->sid == sid)
    {
        printf("找到该学生信息，请输入该学生新信息：学号 姓名 性别 年龄 ：\n");
        scanf("%d %s %s %d", &(head->sid), head->name, head->sex, &(head->age));
        printf("修改成功！\n");
        return head;
    }

    while (pi->next->sid != sid && pi->next != NULL)
    {
        pi = pi->next;
    }
    if (pi->next->sid = sid)
    {
        // STU *pn = pi->next;
        printf("找到该学生信息!\n请输入该学生新信息：学号 姓名 性别 年龄 ：\n");
        scanf("%d %s %s %d", &(pi->next->sid), pi->next->name, pi->next->sex, &(pi->next->age));
        printf("修改成功！\n");
        return head;
    }
}

// 根据年龄排序
void *sort_node(STU *head)
{
    if (head == NULL)
    {
        printf("数据为空，操作失败！\n");
        return NULL;
    }
    else if (head->next == NULL)
    {
        printf("当前只有一条信息，无需排序！\n");
        return head;
    }
    else
    {
        STU *pi = head;
        while (pi->next != NULL)
        {
            printf("s");
            STU *pj = pi;
            STU *pk = pi->next;
            while (pk != NULL)
            {
                printf("d");
                if (pj->age > pk->age)
                {
                    pk = pj;
                }
                pk = pk->next;
            }
            if (pj != pi)
            {
                STU *tmp = malloc(sizeof(STU));
                *tmp = *pi;
                *pi = *pj;
                *pj = *tmp;

                tmp->next = pi->next;
                pi->next = pj->next;
                pj->next = tmp->next;
                free(tmp);
            }
            pi = pi->next;
        }
        printf("排序成功！\n");
    }
}

// 反转
STU *reverse_node(STU *head)
{
}

int main(int argc, char const *argv[])
{
    // 链表节点初始化
    STU *head = (STU *)malloc(sizeof(STU));
    // memset(head, 0, sizeof(STU));

    while (1)
    {
        printf("\n--------------------------------------欢迎使用学生信息管理系统--------------------------------------\n");
        printf("   (1)查看信息  (2)添加信息  (3)删除信息  (4)查找信息  (5)修改信息  (6)排序  (7)反转  (8)清屏  (0)退出系统\n");
        int cmd;
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 0:
            printf("\n成功退出系统！\n");
            free(head);
            exit(0);
        case 1:
            head = show_node(head);
            break;
        case 2:
            head = add_node(head);
            break;
        case 3:
            head = delete_node(head);
            break;
        case 4:
            head = search(head);
            break;
        case 5:
            head = modification_node(head);
            break;
        case 6:
            sort_node(head);
            break;
        case 7:
            head = reverse_node(head);
            break;
        case 8:
            system("clear");
            break;
        }
    }
    return 0;
}