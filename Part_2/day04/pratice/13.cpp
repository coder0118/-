// < / >关系运算符的重载

#include <iostream>
#include <cstdlib>
using namespace std;

class NUM
{
private:
    int n;

public:
    explicit NUM(int n)
    {
        this->n = n;
    }
    bool operator>(int other)
    {
        return this->n > other;
    }
    bool operator>(NUM &other)
    {
        return this->n > other.n;
    }
    bool operator<(int other)
    {
        return this->n < other;
    }
    bool operator<(NUM &other)
    {
        return this->n = other.n;
    }
};

int main(int argc, char const *argv[])
{
    NUM n1(atoi(argv[1])), n2(atoi(argv[2]));
    if (n1 > 20)
    {
        cout << "n1大于20" << endl;
        if (n1 < n2)
        {
            cout << "n1小于n2" << endl;
        }
    }
    if (n1 > n2)
    {
        cout << "n1大于n2" << endl;
    }
    return 0;
}