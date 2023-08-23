// 分配空间没有引用，导致内存泄漏问题
#include <stdio.h>
#include <stdlib.h>
void create_memory_allocation(char *p, int size)
{
    p = (char *)malloc(size);
    if (p == NULL)
    {
        perror("malloc");
    }
}

int main(int argc, char const *argv[])
{
    char *p = NULL;
    create_memory_allocation(p, 5);
    //scanf("%s", p);
    printf("%p\n", p);
    return 0;
}
