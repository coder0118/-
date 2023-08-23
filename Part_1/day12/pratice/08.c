#include<stdio.h>

struct STU{
    unsigned int sid;
    char name[32];
    char phone[12];
};

int main(int argc, char const *argv[])
{
    struct STU stu1={1001,"张三","17789232134"};
    struct STU stu2={1002,"田源源","15635842695"};
    printf("%u %s %s",stu1.sid,stu1.name,stu1.phone);
    return 0;
}

