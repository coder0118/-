#include<stdio.h>
int main()
{
    int nums[3][4] = {{1,2},{[2]=3,4},{20}};
    printf("%d\n",nums[1][3]);
    return 0;
}