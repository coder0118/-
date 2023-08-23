// 编写一个程序，要求用户输入一个整数n，然后动态创建一个大小为n的整数数组，
// 并通过循环将数组的元素赋值为1到n的连续整数。最后打印数组的内容。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//分配内存
int *creat_memony(int *q, int size)
{
    q = (int *)malloc(sizeof(int) * size);
    memset(q,0,size);
    if (q == NULL)
    {
        perror("malloc");
    }
    return q;
}

// 遍历赋值并输出
void out(int *ntr,int size)
{
    for (int i = 0; i < size; i++)
    {
        *(ntr+i)=i+1;
        printf("%d ",*(ntr+i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int size;
    int *p = NULL;
    printf("请输入一个整数：\n");
    scanf("%d", &size);
    p = creat_memony(p, size);
    out(p,size);
    free(p);
    return 0;
}
