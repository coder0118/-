// 类模板
#include <iostream>
using namespace std;

template <typename T>
class Rect
{
private:
    T width, height;

public:
    Rect(T w, T h) : width(w), height(h) {}
    T length()
    {
        return (width + height) * 2;
    }
};

int main()
{
    Rect<int> r1(10, 30);
    cout << r1.length() << endl;
    Rect<float> r2(10.62, 3.654);
    cout << r2.length() << endl;
    return 0;
}