// 若有以下定义和语句 : int s[4][5] = {0}, (*ps)[5] = NULL;
// ps = s;
// 则对s数组元素的正确引用形式是  (    )
// A) ps+1     B) *(ps+3)       C) ps[0][2]       D) *(ps+1)+3
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s[4][5] = {0}, (*ps)[5] = NULL;
    s[1][3] = 666;
    ps = s;
    printf("%d\n", *(*(ps + 1) + 3)); // 第二行第四列：s[1][3]
    printf("%d\n", ps[0][2]);
    printf("%d\n", *(ps + 3));
    printf("%d\n", *(*ps + 3));
    //printf("%d\n", ps+1);

    return 0;
}
