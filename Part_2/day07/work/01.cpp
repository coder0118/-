// 依据程序的功能，请填写正确的代码，实现功能。

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair
{
    friend ostream &operator<<(ostream &out, const Pair<T1, T2> &obj)
    {
        out << obj.first << " " << obj.second;
        return out;
    }

private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
};

int main()
{
    Pair<string, int> p1 = Pair<string, int>("x", 20);
    Pair<string, string> p2 = Pair<string, string>("name", "disen");
    cout << p1 << "," << p2 << endl;
    return 0;
}