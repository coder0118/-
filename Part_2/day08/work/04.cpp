// 编写一个C++ 程序，动态分配一个整型数组，并根据用户输入的索引值访问数组元素。
//     在访问数组元素时处理以下异常情况：
//     1）如果数组分配内存失败，则抛出一个自定义的异常对象 MemoryAllocationException。
//     2）如果用户输入的索引超出了数组的范围，则抛出一个自定义的异常对象 IndexOutOfBoundsException。
// 【要求】在 main 函数中调用动态内存分配函数，并捕获并处理可能抛出的异常。

#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;

class MemoryAllocationException : public exception
{
public:
    const char *what() const throw()
    {
        return "内存分配失败！";
    }
};

class IndexOutBoundsException : public exception
{
public:
    const char *what() const throw()
    {
        return "索引越界！";
    }
};

void newArray(int index)
{
    int *arr = (int *)malloc(sizeof(int) * 100);
    if (arr == NULL)
    {
        throw MemoryAllocationException();
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    if (index > 10 || index < 0)
    {
        throw IndexOutBoundsException();
    }
    cout << arr[index] << endl;
    free(arr);
}

int main()
{
    try
    {
        newArray(6);
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
        return 0;
    }
    return 0;
}