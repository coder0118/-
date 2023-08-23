// 友元函数类内部实现
#include <iostream>
using namespace std;

template <typename T>
class A
{
    friend void showIn(A<T> &a)
    {
        cout << a.item << endl;
    }

private:
    T item;

public:
    A(T item)
    {
        this->item = item;
    }
};

int main()
{
    A<int> a(20);
    showIn(a);
    return 0;
}