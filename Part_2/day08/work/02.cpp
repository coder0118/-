// throw()和throw有什么区别？请举例说明

/*
 * throw() 不会抛出任何异常，如果出现了异常，std::unexpected 函数会被调用，导致程序终止。
 * throw 显示声明异常，例如 throw 异常对象 ；如果出现异常则会跳转到异常代码处理块（try catch）
 */

#include <iostream>
using namespace std;

#if 0

int division(int a, int b) throw()
{
    if (b == 0)
    {
    }
    return a / b;
}
#else

int division(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("除数不能为0！");
    }
    return a / b;
}

#endif // DEBUG

int main()
{
    try
    {
        int ret = division(2, 1);
        cout << ret << endl;
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}