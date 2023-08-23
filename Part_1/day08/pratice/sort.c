/*生成随机数并降序排列*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main(int argc, char const *argv[])
{
    int arr[N];
    srand((unsigned)time(NULL));
    while (N)
    {
        arr[N-1]=rand()%101;
    }
    
    
    return 0;
}
