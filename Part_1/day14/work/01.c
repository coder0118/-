// 随机生成10位学生的成绩并写入到score.txt文件中
// 【要求】随机生成学号和成绩，每一行存储一位学生的成绩，学号与成绩之间用 ","逗号分隔。
// 【提示】成绩范围[0, 100]

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define STUS 10
int main(int argc, char const *argv[])
{
    FILE *f=fopen("score.txt","w");
    srand(time(NULL));
    for (int i = 0; i < STUS; i++)
    {
        int sid = rand()%100+100000;
        int score=rand()%41+60;
        fprintf(f,"%d , %d\n",sid,score);
    }
    printf("成功!\n");
    fclose(f);
    return 0;
}
