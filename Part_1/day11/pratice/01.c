// 拆分多个函数，进行内存空间的申请、输入数据、输出数据
#include <stdio.h>
#include <stdlib.h>

// 申请内存空间
int *creat_int_arr(int n)
{
    int *p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        perror("malloc");
    }
    return p;
}
// 输入数据
void input_int_data(int *q, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("请输入第一个数据：\n");
        scanf("%d",q+i);
    }
}
//输出数据
void output_int_arr(int *p,int size)
{
    while (*p)
    {
        printf("%d\n",*(p++));
    }
}

int main(int argc, char const *argv[])
{
    //调用分配函数，指定大小
    int *ptr=creat_int_arr(20);
    //输入
    input_int_data(ptr,20);
    output_int_arr(ptr,20);
    //程序结束释放内存空间，避免内存泄漏
    free(ptr);
    return 0;
}
