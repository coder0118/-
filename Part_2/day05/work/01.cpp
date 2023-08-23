// 编写一个名为 String 的类，表示字符串。
// 重载赋值运算符 =，使其能够执行字符串的赋值操作。

#include <iostream>
#include <cstring>
using namespace std;

class String
{
    public:
    char *str;
    public:

    // 带参构造函数
    String(const char *s)
    {
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }
    // 析构函数
    ~String()
    {
        delete[] str;
    }
    // 运算符重载
    String &operator=(const String &s)
    {
        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);
        return *this;
    }
};

int main() {
    String s1("desin"),s2("jack");
    String s3=s1;
    String s4=s2;
    cout << "s3=" << s3.str << endl;
    cout << "s4=" << s4.str << endl;
    return 0;
}