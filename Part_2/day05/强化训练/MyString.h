#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    friend ostream &operator<<(ostream &cout, const MyString &str);
    friend istream &operator>>(istream &cin, const MyString &str);

public:
    // 字符串拼接
    MyString &operator+(MyString &other);
    MyString &operator+(const char *other);

    // 字符串赋值
    MyString &operator=(MyString &other);
    MyString &operator=(const char *other);

    // 字符串比较
    bool operator==(MyString &other);
    bool operator==(const char *other);

    // 返回字符串位置
    char operator[](int index);

    // 带参构造
    MyString(const char *str);

    // 拷贝构造函数
    MyString(MyString &str);

    // 显示函数
    void show();

    // 析构
    ~MyString();

private:
    char *mStr;
    int mSize;
};
#endif