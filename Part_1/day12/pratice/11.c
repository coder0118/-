// 结构体嵌套
#include <stdio.h>

struct stu
{
    char *s_name;
    int s_id;
};

typedef struct class
{
    char *c_name;
    int number;
    struct stu s1;
}CLASS;


int main(int argc, char const *argv[])
{
    
    CLASS c1 = {"zhangsan", 55, {"李四", 55}};

    return 0;
}
