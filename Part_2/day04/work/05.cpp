// 继上面的Car类， 设计Person类，并设置Car类为Person类的友元类，
// 使得在Person类的成员函数直接访问 Car对象的所有成员。
// 【提示】Person类的构造函数传入 Car类的对象， 
// 增加Person的成员函数用于操作Car类的成员函数或访问Car对象的属性。

#include <iostream>
#include <string>
using namespace std;

class Person;

class Car
{
    friend class Person;
    string color;
    int weight;

public:
    Car(string color, int weight) : color(color), weight(weight) {}
    void driveCar()
    {
        cout << "驾驶 " << color << " 颜色的车" << endl;
    }
    void start()
    {
        cout << "汽车已经启动" << endl;
    }
    void stop()
    {
        cout << "已停车" << endl;
    }
};

class Person
{
private:
    string name;
    Car *car;

public:
    Person(string name,Car *obj)
    {
        car = obj;
        this->name=name;
    }
    void drive()
    {
        cout<<name;
        car->driveCar();
    }

    void start()
    {
        car->start();
    }

    void stop()
    {
        car->stop();
    }
};

int main()
{
    Car car("红", 2000);
    car.driveCar();
    car.start();
    car.stop();
    Person p1("张三",&car);
    p1.drive();
    p1.start();
    p1.stop();
    return 0;
}