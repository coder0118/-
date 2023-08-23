

#ifndef __LINK_H__
#define __LINK_H__
#include<stdlib.h>
#include<stdio.h>

typedef struct student
{
    int sid;
    char name[32];
    char sex[8];
    int age;
    struct student *next;
} STU;

extern STU *show_node(STU *head);
extern STU *add_node(STU *head);
extern STU *delete_node(STU *head);
extern STU *search(STU *head);
extern STU *modification_node(STU *head);
extern STU *sort_node(STU *head);
extern STU *reverse_node(STU *head);

#endif
