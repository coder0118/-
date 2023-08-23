// 链表 编写学生信息管理系统
#include <stdio.h>
// 定义链表结构体
typedef struct stu_s
{
    char sid;
    char name[32];
    int age;
    struct stu_s *next;
} STU;

// 显示
void show(STU *head)
{
    STU *pi = head;
    while (pi != NULL)
    {
        printf("%d %s %d\n", pi->sid, pi->name, pi->age);
        pi = pi->next;
    }
}

// 插入数据，头插入
STU *insert_head(STU *head, STU *item)
{
    if (head == NULL)
    {
        head = item;
    }
    else
    {
        item->next = head;
        head = item;
    }
    return head;
}

// 尾插入
STU *insert_end(STU *head, STU *item)
{
    if (head == NULL)
    {
        return item;
    }
    STU *pi = head;
    while (pi->next != NULL)
    {
        pi = pi->next;
    }
    pi->next = item;
    return head;
}

// 有序插入
STU *insert_sort(STU *head, STU *item)
{
    if (head == NULL)
    {
        return item;
    }
    if (head->age > item->age)
    {
        item->next = head;
        head = item;
    }
    else
    {
        STU *pi = head;
        while (pi->next != NULL && pi->next->age < item->age)
        {
            pi = pi->next;
        }
        item->next = pi->next;
        pi->next = item;
    }
    return head;
}

// 删除
STU *delete_link(STU *head,char sid)
{
    if (head==NULL)
    {
        printf("无数据！\n");
        return NULL;
    }
    if (head->sid==sid)
    {
        STU *pn=head;
        head=head->next;
        printf("删除成功！\n");
        free(pn);
    }else
    {
        STU *pi=head;
        while (pi->next!=NULL&&pi->next->sid!=sid)
        {
            pi=pi->next;
        }
        if (pi->next==NULL)
        {
            printf("未找到！\n");
        }else{
            STU *pn=pi->next;
            pi->next=pn->next;
            printf("删除成功！\n");
        }
        
    }
    
}


//查找
STU *search(STU *head,char sid)
{
    
}

int main(int argc, char const *argv[])
{
    STU stu1 = {1, "disen", 20, NULL};
    STU stu2 = {2, "jack", 22, NULL};
    STU stu3 = {3, "lucy", 18, NULL};
    STU stu4 = {4, "张三", 25};
    STU stu5 = {5, "李四", 19};

    STU *head = &stu1;
    stu1.next = &stu2;
    stu2.next = &stu3;
    stu3.next = NULL;

    head = insert_head(head, &stu4);
    head = insert_end(head, &stu5);
    show(head);
    return 0;
}
