#include <iostream>
using namespace std;

bool isSs(int n = 10)
{
    int i = 2;
    for (; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

double area(int r=1)
{
    return r*r*3.14;
}

int main()
{
    cout << isSs() << endl;
    cout << isSs(7) << endl;

    cout << area() << endl;
    cout << area(2) << endl;

    return 0;
}