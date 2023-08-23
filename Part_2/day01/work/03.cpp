// 填空：
// namespace Circle
// {
//     float r;
//     float s();
// }
// float Circle::s()
// {
//     return r * 3.14;
// }
// namespace Range
// {
//     int w, h;
//     int s();
// }

// int Range::s()
// {
//     return w * h
// }

// int main()
// {
//     cout << "输入半径:";
//     cin >> ___Circle:r____;
//     float s1 = ______Circle:s()_________;
//     cout << "面积： " << s1;
//     return 0;
// }

#include <iostream>
using namespace std;

namespace Circle
{
    float r;
    float s();
}
float Circle::s()
{
    return r * 3.14;
}
namespace Range
{
    int w, h;
    int s();
}

int Range::s()
{
    return w * h;
}

int main()
{
    cout << "输入半径:";
    cin >> Circle::r;
    float s1 = Circle::s();
    cout << "面积： " << s1 << endl;
    return 0;
}