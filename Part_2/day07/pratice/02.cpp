// 类模板作为函数参数须指定具体类型

#include <iostream>
using namespace std;

template <typename T>
class Rect
{
private:
    T width;
    T height;

public:
    Rect(T width, T height) : width(width), height(height) {}
    void draw()
    {
        cout << "正在绘制矩形" << endl;
    }
    T length()
    {
        return (width + height) * 2;
    }
};

void Draw(Rect<int> &r)
{
    r.draw();
}

int main()
{
    Rect<int> r1(2,6);
    r1.draw();
    cout<<r1.length()<<endl;
    return 0;
}