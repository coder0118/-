
#include <stdio.h>

void callback(int item, int index)
{
    printf("%d->%d\n", item, index);
}

void foreach (int a[], int size, void (*func)(int, int))
{
    for (int i = 0; i < size; i++)
    {
        func(a[i], i);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 2, 5, 4, 8};
    foreach (arr, 5, callback)
        ;
    return 0;
}
