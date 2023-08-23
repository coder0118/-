//键盘输入字符串判断是否为回文
#include<stdio.h>
#include<string.h>
void main()
{
    char arr[32];
    int i = 0;
    printf("请输入字符串：\n");
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr)-1; i++)
    {
        if (arr[i]!=arr[strlen(arr)-i-1])
        {
            printf("不是回文！\n");
            break;
        }
        if(arr[i]==arr[strlen(arr)-i-1]&&(i>=(strlen(arr)-1)/2))
        {
            printf("是回文！\n");
            break;
        }
    }
}