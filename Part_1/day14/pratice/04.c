// 随机生成10个5位2进制数存到random.txt文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int m[10][10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        m[i] = rand() % 100000;
    }
    FILE *f = fopen("./rand.txt", "w+");
    fwrite(m, 1, 528, f);
    fclose(f);
    return 0;
}
