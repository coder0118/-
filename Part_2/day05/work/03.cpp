// 编写一个名为 Matrix 的类，表示矩阵。重载乘法运算符 *，使其能够执行两个矩阵的乘法操作。

// 

#include <iostream>
using namespace std;

class Matrix
{
private:
    int n;

public:
    Matrix()
    {
        n = 1;
    }
    Matrix(int n) : n(n) {}
    void show()
    {
        cout << n << endl;
    }

    // *运算符重载
    Matrix &operator*(Matrix &obj)
    {
        this->n *= obj.n;
        return *this;
    }
};

int main()
{
    Matrix m1(8);
    Matrix m2(5);
    Matrix m3 = m1 * m2;
    m3.show();
    return 0;
}