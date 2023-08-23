// 下面程序的功能是将两个字符串s1和s2连接起来。请填空。
// #include <stdio.h>
//     
//    char *conj(char *p1, char *p2)
// {
//     char *p = p1;
//     while (*p1)
//         ______;
//     while (*p2)
//     {
//         *p1 = ______;
//         p1++;
//         p2++;
//     }
//     ______
//     return p;
// }

// main()
// {
//     char s1[80], s2[80];
//     gets(s1);
//     gets(s2);
//     conj(s1, s2);
//     puts(s1);
// }
#include <stdio.h>

   char *conj(char *p1, char *p2)
{
    char *p = p1;
    while (*p1)
        ;
    while (*p2)
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    ______
    return p;
}

main()
{
    char s1[80], s2[80];
    gets(s1);
    gets(s2);
    conj(s1, s2);
    puts(s1);
}
