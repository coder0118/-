#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={8,1,2,5,0,4,7,6,3,9};
    printf("%d\n",arr[*(arr+arr[3])]);
    return 0;
}
