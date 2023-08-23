// 编写求扇形面积函数Area
//     当Area(10, 30) 时，计算半径为10，
// 角度为30度的扇形面积；当Area(10) 时，
// 计算半径为10的圆的面积
#include <iostream>
using namespace std;

namespace shape
{
    float r;
    int angle;
    float Area();
}

float shape::Area()
{
    return ((r * r * 3.14) / 360) * angle;
}


int main(int argc, char const *argv[])
{
    cout << "输入扇形角度：";
    cin >> shape::angle;

    cout << "输入扇形半径：";
    cin >> shape::r;

    float area = shape::Area();
    cout << "面积为：" << area << endl;
    return 0;
}
