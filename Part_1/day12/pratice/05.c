// 提取内容abc#def@ghi
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *content = "abc#def@ghi";
    char s1[20] = "";
    char s2[20] = "";
    char s3[20] = "";
    sscanf(content, "%3s#%3s@%s", s1, s2, s3);
    printf("%s%s%s\n", s1, s2, s3);
    sscanf(content, "%[^a-z]#%s%s", s1, s2, s3);
    //sscanf(content, "%*#%*@s%s", s1, s2, s3);

    printf("%s%s%s\n", s1, s2, s3);

    return 0;
}
