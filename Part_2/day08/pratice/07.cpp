#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;

int maxVal(int a, int b)
{
    if (a == b)
    {
        throw invalid_argument("参数不能相等");
    }
    return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    try
    {
        cout << maxVal(a, b) << endl;
    }
    catch (exception &error)
    {
        std::cerr << error.what() << '\n';
    }

    return 0;
}