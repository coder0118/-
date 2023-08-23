#include "MyString.h"
using namespace std;

int main()
{
    MyString s1("张三");
    s1.show();
    MyString s2("李四");
    s2.show();
    s2 + "desin";
    s2.show();
    MyString s3 = s1 + s2;
    s3.show();
    if (s2 == s2)
    {
        cout << "相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }

    s3.~MyString();
    s2.~MyString();
    s1.~MyString();
    return 0;
}