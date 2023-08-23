#include <iostream>
#include <exception>
using namespace std;

template <typename T>
class Stack
{
private:
    T *mData;
    int mCapacity;
    int mIndex;

public:
    Stack(int capacity) : mCapacity(capacity)
    {
        mData = new T[capacity];
        mIndex = -1;
    }
    ~Stack()
    {
        delete[] mData;
        mData = NULL;
    }

    T pop() throw(out_of_range)
    {
        if (mIndex == -1)
        {
            throw out_of_range("栈为空！");
        }
        return mData[mIndex--];
    }

    Stack &push(const T &item) throw(out_of_range)
    {
        if (mIndex == mCapacity - 1)
        {
            throw out_of_range("超出最大容量！");
        }
        return *this;
    }

    T &at(int index) throw(out_of_range)
    {
        if (mIndex == -1 || index < 0 || index > mIndex)
        {
            throw out_of_range("栈空或索引无效！");
        }
        return mData[index];
    }
};

int main(int argc, const char **argv)
{
    Stack<int> s1(5);
    s1.push(10).push(6).push(4).push(100);
    for (int i = 0; i < 2; i++)
    {
        s1.at(i);
    }

    return 0;
}