#include<stdio.h>

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 1; j < i; j++)
        {
            //可以调用
            twoNumAdd(i, j);
            //不可调用，static修饰，是help.c的内部函数
            //_show(i,j,i+j);
        }
    }
}