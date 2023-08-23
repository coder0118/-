#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    int mSize = v1.capacity();
    int cnt = 0;
    v1.resize(3);
    for (int i = 0; i < 1000000; i++)
    {
        v1.push_back(i);
        if(mSize!=v1.capacity())
        {
            mSize=v1.capacity();
            cout<<++cnt<<" "<<mSize<<endl;
        }
    }

    return 0;
}
