#include<stdio.h>
#include<string.h>
int main()
{
    char ask_name[32] = "jack";
    char arr[] = "ni hao";
    printf("s\n", ask_name);
    //sizeof() 计算已分配内存大小
    printf("%ld\n", sizeof(ask_name));
    //strlen() 统计'\0'之前的字符个数
    printf("%ld\n", strlen(ask_name));

    //用while()/for 循环实现strlen()
    int i=0;
    while (arr[i]) i++;
        printf("%s的长度：%d\n",arr,i);

    return 0;
}