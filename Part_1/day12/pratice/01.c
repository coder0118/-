//日期格式化输出
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char buf[20]="";
    sprintf(buf,"%d年%02d月%d日",2023,7,18);
    printf("%s\n",buf);
    return 0;
}
