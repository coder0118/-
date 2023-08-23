//
#include <iostream>
using namespace std;

template <typename T>
class MyArray
{
private:
    int index;
    T *arr;
    int maxSize;

public:
    MyArray(int size)
    {
        maxSize = size;
        arr = new T[maxSize];
        index = 0;
    }
    MyArray(const MyArray<T> &other)
    {
        this->index = other.index;
        this->maxSize = other.maxSize;
        this->arr = new T[this->maxSize];
        for (int i = 0; i <= this->index; i++)
        {
            this->arr[i] = other.arr[i];
        }
    }

    ~MyArray()
    {
        delete this->arr;
    }

    T &get(int i)
    {
        return arr[i];
    }

    T &operator[](int i)
    {
        return arr[i];
    }

    MyArray<T> &push(T item)
    {
        if (index < maxSize)
        {
            arr[index++] = item;
        }
        return *this;
    }

    T pop()
    {
        return arr[--index];
    }
};

int main()
{
    MyArray<int> a1 = MyArray<int>(20);
    a1[0] = 100;
    a1[1] = 200;
    a1[2] = 300;
    MyArray<int> a2 = a1;
    cout << a2[0] << "," << a2[2] << endl;
    return 0;
}