// 友元函数外部实现

// 外部实现友元函数是函数模板时，在类定义前
// 

#include <iostream>
using namespace std;

template <typename T>
class A
{
    friend void showOut(A<T> &a);
    private:
    T item;
    public:
    void show
};

int main() {
    
    return 0;
}