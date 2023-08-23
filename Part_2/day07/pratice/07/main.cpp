// 类模板头文件与源文件分离
// 在使用类模板，声明与实现必须在同一文件。

#include <mypoint.h>

int main()
{
    Point<int> P1(6,9);
    P1.show();
}