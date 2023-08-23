#include"link.h"
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
STU *sort_node(STU *head)
{
    STU *pi = head;
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
}

// 反转
STU *reverse_node(STU *head)
{
}
