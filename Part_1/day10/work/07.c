// 若有以下的定义，能正确表示t数组元素地址的表达式是(  )
//     int t[3][2]；
// A) &t[3][2]  B) t[3]    		C) t[1]    		D) *t[2]
 #include<stdio.h>
int main(int argc, char const *argv[])
{
    int t[3][2]={0};
    int *p = &t[3][2];
    printf("%p\n",p);
    printf("%p\n", &t[3][2]);
    printf("%p\n", t[3]);   
    printf("%p\n", *t[2]);  //nill
    return 0;
}
