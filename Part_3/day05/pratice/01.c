#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>

int main(int argc, char const *argv[])
{
    key_t key = ftok("/",100);
    printf("key = %d\n",key);
    key_t key2 = ftok("/",200);
    printf("key2 = %d\n",key2);
    return 0;
}
