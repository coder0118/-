#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3][3] = {1, 2, 3,
                     4, 5, 6,
                     7, 8, 9};
    int *p = arr+2;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(p++));
    }

    printf("%p\n", arr);
    printf("%p\n", *(arr + 1));
    return 0;
}
