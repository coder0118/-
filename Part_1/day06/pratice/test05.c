#include <stdio.h>
void main()
{
    char arr_bin[32] = "";
    fgets(arr_bin, 32, stdin);
    printf("%s",arr_bin);
}