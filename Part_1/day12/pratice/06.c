// char *content = "disen:17791692095\njack:18799101234\nlucy:19088675432";
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *content = "disen:17791692095\njack:18799101234\nlucy:19088675432";
    char data[3][12];
    char(*p)[12] = data;
    // 1
    sscanf(content, "%*[a-z]:%s\n%*[a-z]:%s\n%*[a-z]:%s", p, p + 1, p + 2);
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", p[i]);
    }

    printf("--------------\n");
    // 2
    sscanf(content, "%*7%s%*7%s%*7%s", p, p + 1, p + 2);
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", p[i]);
    }

    printf("--------------\n");
    // 3
    sscanf(content, "%[0-9]%s%[0-9]%s%[0-9]%s", p, p + 1, p + 2);
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", p[i]);
    }
    return 0;
}
