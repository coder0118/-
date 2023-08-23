/**
 * @Author: Your Name
 * @Date: 2023/8/3 12:36:33
 * @LastEditors: Your Name
 * @LastEditTime: 2023/8/3 12:36:33
 * Description: 
 */

// const修饰的成员虚函数，在子类中能否重写，请举例说明
// 可以重写

#include <iostream>
using namespace std;

class Base
{
protected:
    const virtual int printA() = 0;
};

class A : public Base
{
    public:
    const int printA()
    {
        cout << "A::printA();" << endl;
    }
};

int main()
{
    A a;
    a.printA();
    return 0;
}