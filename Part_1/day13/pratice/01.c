#include<stdio.h>
#pragma pack(2)
struct nw
{
    char a;
    int b;
};

int main(int argc, char const *argv[])
{
    struct nw n;
    printf("%ld\n",sizeof(n));
    return 0;
}

