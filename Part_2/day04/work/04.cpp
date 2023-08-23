// 设计Car类，包含color（颜色）、weight(重量) 
// 两个属性和一个带color和weight两个参数的构造函数、
// 以及driver() 驾车、start() 启动、stop() 停车的函数。
// 【提示】设计的类，可以在main() 自行测试

#include <iostream>
#include <string>
using namespace std;

class Car
{
    string color;
    int weight;
    public:
    Car(string color,int weight):color(color),weight(weight){}
    void driveCar()
    {
        cout<<"驾驶 "<<color<<" 颜色的车"<<endl;
    }
    void start()
    {
        cout<<"汽车已经启动"<<endl;
    }
    void stop()
    {
        cout<<"已停车"<<endl;
    }
};

int main() {
    Car car("红",2000);
    car.driveCar();
    car.start();
    car.stop();
    return 0;
}