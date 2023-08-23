#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char const *argv[])
{
#ifdef CREATE_FIFO
    mkfifo("bob_lucy", 0755);
    mkfifo("lucy_bob", 0755);
#endif
    return 0;
}
