// 创建一个名为 Car 的类，具有成员变量 brand 和 speed，
// 以及成员函数 void accelerate() 和 void brake()，用于加速和刹车操作。

#include <iostream>
using namespace std;

class Car
{
private:
    char *brand;
    float speed;

public:
    void Init(char *brand)
    {
        this->brand=brand;
        speed=0;
    }
    void accelerate(float n);
    void brake(float z);
};



void Car::accelerate(float n)
{
    speed+=n;
    cout<<"汽车已经加速，当前速度为："<<speed<<endl;
}

void Car::brake(float z)
{
    speed-=z;
    cout<<"汽车已经减速，当前速度为："<<speed<<endl;
}

int main()
{
    Car c1;
    c1.Init("奔驰");
    c1.accelerate(80);
    c1.brake(20);
    return 0;
}