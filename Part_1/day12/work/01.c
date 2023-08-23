// 给定一张图片的规格信息，请提取出图片的格式、宽和高。
// char *s = "base64;image/png:320,480";
// 输出结果： image / png 320 480

#include <stdio.h>

int main()
{
    char *s = "base64;image/png:320,480";
    char s1[10];
    int a, b;
    sscanf(s, "%*[^;];%[^:]:%d,%d", s1, &a, &b);
    printf("%s %d %d\n", s1, a, b);
    printf("图片总像素数为%d像素\n",a*b);
    printf("图片的大小为：%d B\n",a*b*3);
    return 0;
}