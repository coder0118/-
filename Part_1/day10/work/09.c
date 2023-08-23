// 下面程序段的运行结果是____c_____.char *s = "abcde";
// s += 2;
// printf("%d", s);
//   a) cde     b)字符'c'     c)字符'c'的地址     d)无确定的输出结果
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char *s="abcde";
    s+=2;
    printf("%s\n",s);
    return 0;
}
