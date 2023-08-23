// 编写一个C++ 函数 divideNumbers，接受两个整数作为参数，并返回它们的商。
//     在函数中处理以下异常情况：
//     1）如果除数为0，则抛出 std::logic_error 异常类的一个实例，并传递适当的错误消息。
//     2）如果被除数为0，则抛出 std::runtime_error 异常类的一个实例，并传递适当的错误消息。
// 【要求】在 main 函数中调用 divideNumbers，并捕获并处理可能抛出的异常。

#include <iostream>
using namespace std;

int divideNumbers(int a, int b)
{
    if (a == 0)
    {
        throw logic_error("除数为0！");
    }
    else if (b == 0)
    {
        throw runtime_error("被除数为0！");
    }
    return a/b;
}

int main()
{
    try
    {
        cout<<divideNumbers(0,3)<<endl;
    }
    catch(const exception& e)
    {
        cout << e.what() << endl;
    }
    
    return 0;
}