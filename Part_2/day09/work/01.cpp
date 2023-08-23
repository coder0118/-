// 【场景】字符串反转
//     编写一个函数 reverseString，接受一个字符串作为参数，并返回该字符串的反转版本。

#include <iostream>
using namespace std;

string reverseString(string &str)
{
    string src;
    src.assign(str);
    src.c_str();
    for (int i = 0; i < src.size() / 2; i++)
    {
        char tmp = src[i];
        src[i] = src[src.size() - 1 - i];
        src[src.size() - 1 - i] = tmp;
    }

    return string(src);
}

int main()
{
    string s = "abcdefg";
    cout << s << endl;
    cout << reverseString(s) << endl;
    return 0;
}
