// c++异常处理
#include <iostream>
using namespace std;

int divd(int a, int b)
{
    if (b == 0)
    {
        throw "错误";
    }
    return a / b;
}

int main()
{
    int ret = 0;
    try
    {
        ret = divd(2, 0);
    }
    catch (const char *error)
    {
        std::cerr << error << '\n';
    }
    cout << ret << endl;

    return 0;
}