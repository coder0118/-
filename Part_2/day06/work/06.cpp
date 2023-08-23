// 创建一个基类 Shape，其中包含一个纯虚函数 perimeter()，用于计算形状的周长。
// 从 Shape 派生出 Triangle 类和 Square 类，分别实现计算三角形和正方形的周长的函数。
#include <iostream>
using namespace std;

class Shape
{
protected:
    virtual float perimeter() = 0;
};

class Triangle : public Shape
{
public:
    
};

int main()
{

    return 0;
}