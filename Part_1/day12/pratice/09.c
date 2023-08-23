//结构体变量初始化
#include <stdio.h>
#include <string.h>
struct LRC
{
    char show_time[10];
    char content[128];
} line1, line2;

int main(int argc, char const *argv[])
{
    strcpy(line1.show_time, "00:00:02");
    strcpy(line1.content, "阿萨都IC那是萨哈计划");
    struct LRC line3={"00:00:12","sadkdadm"};
    printf("%s %s\n", line1.show_time, line1.content);
    printf("%s %s\n", line3.show_time, line3.content);

    return 0;
}
