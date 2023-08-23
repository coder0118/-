// 创建一个名为 Circle 的类，
// 具有成员变量 radius 和 pi（圆周率），
// 以及成员函数 double calculateArea()，用于计算圆的面积。

#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
    float pi;

public:
    double calculateArea(int r,float pi);
};

double Circle::calculateArea(int r,float pi)
{

    return r*r*pi;
}

int main()
{
    Circle c1;
    cout<<c1.calculateArea(2,3.14)<<endl;
    return 0;
}