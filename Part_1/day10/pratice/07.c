#include<stdio.h>
int main(int argc, char const *argv[])
{
    char arr_name[10][12];
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第%d位同学姓名：\n",i+1);
        scanf("%s",&arr_name[i][0]);
    }

    for (int i = 0; i < 5; i++)
    {
       printf("第%d位同学：%s\n",i+1,arr_name[i]);
    }
    
    return 0;
}
