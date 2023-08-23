// 编写一个程序，定义一个结构体表示员工的信息，
// 包括姓名、工号和工资。编写一个函数，接受一个员工结构体数组和
// 数组长度作为参数，并计算并返回所有员工的平均工资。
#include <stdio.h>

typedef struct staff_info
{
    char name[64];
    char id;
    float salary;
} STF;

float avg(STF stf[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += stf[i].salary;
    }
    sum /= size;
    return sum;
}

int main(int argc, char const *argv[])
{
    STF s[] = {
        {"田源源", '1', 1000.0},
        {"丁俊熙", '2', 1200.0}};

    float avag = avg(s, sizeof(s) / sizeof(STF));
    for (int i = 0; i < sizeof(s) / sizeof(STF); i++)
    {
        printf("  %s  %c  %.2f\n", s[i].name, s[i].id, s[i].salary);
    }
    printf("  平均薪资：%.2f\n", avag);
    return 0;
}
