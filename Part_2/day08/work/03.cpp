// 编写一个C++ 程序，读取一个文件的内容并打印到控制台。
//     在文件读取过程中处理以下异常情况：
//     1）如果文件打开失败，则抛出一个自定义的异常对象 FileOpenException。
//     2）如果文件读取过程中发生错误，则抛出一个自定义的异常对象 FileReadException。
// 【要求】在 main 函数中调用文件读取函数，并捕获并处理可能抛出的异常。
#include <iostream>
#include <string>
#include <fstream>
#include <exception>
using namespace std;

class FileOpenException : public exception
{
public:
    const char *what() const throw()
    {
        return "打开文件失败！";
    }
};

class FileReadException : public exception
{
public:
    const char *what() const throw()
    {
        return "读取文件失败！";
    }
};

void readFile(const char *path)
{
    FILE *file = fopen(path, "r");
    if (file == NULL)
    {
        throw FileOpenException();
    }
    char s[100];
    if (fgets(s, 100, file) == NULL)
    {
        throw FileReadException();
    }
    printf("%s\n",s);
}

int main()
{
    try
    {
        const char *path = "a.txt";
        readFile(path);
    }
    catch (const exception &e)
    {
        cout << e.what() << '\n';
        return 0;
    }

    return 0;
}