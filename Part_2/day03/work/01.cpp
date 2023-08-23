// 请完善如下程序：
// class SLink
// {
// private:
//     char *title;

// public:
//     ____________1___________
//     SLink(const char *title)
//     {
//         ______ = (char *)malloc(50);
//         ___________________;
//     }
//     ~SLink();
//     void show()
//     {
//         cout << title << endl;
//     }
// };

// ____3___ ~SLink() {}
// int main()
// {
//     SLink s1;
//     SLink s2("disen补课中");
//     s2.show();
//     return 0;
// }

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class SLink
{
private:
    char *title;

public:
    SLink()
    {
        title="desin休息中";
    }
    SLink(const char *title)
    {
        this->title = (char *)malloc(50);
        strcpy(this->title,title);
    }
    ~SLink();
    void show()
    {
        cout << title << endl;
    }
};

SLink::~SLink() {}

int main()
{
    SLink s1;
    SLink s2("disen补课中");
    // s1.show();
    s2.show();
    return 0;
}