#include "MyString.h"

// 带参构造函数
MyString::MyString(const char *s)
{
    mSize = strlen(s);
    mStr = new char[strlen(s) + 1];
    strcpy(mStr, s);
}

// 拷贝构造函数
MyString::MyString(MyString &str)
{
    mSize = str.mSize;
    char *p = new char[mSize + 1];
    strcpy(p, str.mStr);
    delete mStr;
    mStr = p;
}

// 显示函数
void MyString::show()
{
    cout << mStr << "  " << mSize << endl;
}

// 析构函数
MyString::~MyString()
{
    delete[] mStr;
    // cout<<"函数已析构！"<<endl;
}

// +重载 字符串拼接
MyString &MyString::operator+(MyString &other)
{
    mSize += other.mSize;
    char *p = new char[mSize + 1];
    strcpy(p, mStr);
    strcat(p, other.mStr);
    delete[] mStr;
    mStr = p;
}

MyString &MyString::operator+(const char *s)
{
    mSize += strlen(s);
    char *p = new char[strlen(s) + 1];
    strcpy(p, mStr);
    strcat(p, s);
    delete[] mStr;
    mStr = p;
}

// =重载运算符 赋值
MyString &MyString::operator=(MyString &other)
{
    mSize = other.mSize;
    char *p = new char[mSize + 1];
    strcpy(p, other.mStr);
    delete[] mStr;
    mStr = p;
}

MyString &MyString::operator=(const char *s)
{
    mSize = strlen(s);
    char *p = new char[mSize + 1];
    strcpy(p, s);
    delete[] mStr;
    mStr = p;
}

// ==重载 字符串比较
bool MyString::operator==(MyString &other)
{
    if (strcmp(mStr, other.mStr))
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool MyString::operator==(const char *s)
{
    if (strcmp(mStr, s))
    {
        return false;
    }
    else
    {
        return true;
    }
}

// << >>重载
ostream &operator<<(ostream &cout, const MyString &str)
{
    cout << str.mStr;
    return cout;
}

istream &operator>>(istream &cin, const MyString &str)
{
    cin >> str.mStr;
    return cin;
}
