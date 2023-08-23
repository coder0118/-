// 有以下程序
// void fun(char *c, int d)
// {
//     *c = *c + 1;
//     d = d + 1;
//     printf("%c,%c,", *c, d);
// }
// main()
// {
//     char a = 'A', b = 'a';
//     fun(&b, a);
//     printf("%c,%c\n", a, b);
// }
// 程序运行后的输出结果是（D）
// A)B,a,B,a B) a,B,a,B C) A,b,A,b D) b,B,A,b

//
#include <stdio.h>

void fun(char *c, int d)
{
    *c = *c + 1;
    d = d + 1;
    printf("%c,%c\n", *c, d);
}

int main(int argc, char const *argv[])
{
    char a = 'A', b = 'a';
    fun(&b, a);
    printf("%c,%c\n", a, b);
    return 0;
}
