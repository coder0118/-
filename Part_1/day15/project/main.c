#include<stdio.h>
#include"link.h"

int main(int argc, char const *argv[])
{
    // 链表节点初始化
    STU *head = (STU *)malloc(sizeof(STU));
    memset(head, 0, sizeof(STU));

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
            head = sort_node(head);
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