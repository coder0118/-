// 创建一个名为 Rectangle 的类，具有成员变量 width 和 height，
// 以及成员函数 double calculateArea()，用于计算矩形的面积。

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width;
    int height;
    int calculateArea(int width,int height);
};

int Rectangle::calculateArea(int width, int height)
{
    return width*height;
}

int main()
{
    Rectangle R1;
    cout<<R1.calculateArea(2,6)<<endl;
    return 0;
}