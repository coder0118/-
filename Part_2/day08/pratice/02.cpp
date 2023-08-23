// throw限制与严格类型匹配
#include <iostream>
using namespace std;

class A
{
public:
    int n;
    A(int n) : n(n) {}
};

void show(int x)
{
    if (x == 1)
        throw 0;
    else if (x == 2)
        throw 'a';
    else if (x==3)
    {
        throw "abc";
    }
}

int main()
{
    try
    {
        show(6);
    }
    catch (int error)
    {
    }
    catch (const char *error)
    {
    }
    catch (A &error)
    {
    }
}