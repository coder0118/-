// 请完善如下程序：
// class Color
// {
// private:
//     int r, g, b;

// public:
//     explicit Color(int r, int g = 0, int b = 0) : _______ {}
//     void show()
//     {
//         cout << r << "," << g << "," << b << endl;
//     }
// };

// int main()
// {
//     Color c = _________;
//     c.show();
//     return 0;
// }

#include <iostream>

using namespace std;

class Color
{
private:
    int r, g, b;

public:
    explicit Color(int r, int g = 0, int b = 0) : r(254),g(125),b(23){}
    void show()
    {
        cout << r << "," << g << "," << b << endl;
    }
};

int main()
{
    Color c =Color(22,3,5) ;
    c.show();
    return 0;
}

