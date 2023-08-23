/*设计函数，接收一个字符串，返回这个字符串的逆向内容。*/
#include <stdio.h>
#include <string.h>
void reverse(char arr[]);
int main(int argc, char const *argv[])
{
    char arr[] = "abcpude";
    printf("%s\n", arr);
    reverse(arr);
    printf("%s\n", arr);
    return 0;
}

void reverse(char arr[])
{
    int len = strlen(arr), i = 0;
    while (i <= len / 2)
    {
        char tmp = arr[i];
        arr[i] = arr[len - 1];
        arr[len - 1] = tmp;
        i++;
        len--;
    }
}

// #include <stdio.h>
// #include <string.h>

// void reverse_string(char str[])
// {
//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++)
//     {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }
// }

// int main()
// {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // 从输入的字符串中去除换行符
//     str[strcspn(str, "\n")] = '\0';

//     reverse_string(str);

//     printf("Reversed string: %s\n", str);

//     return 0;
// }