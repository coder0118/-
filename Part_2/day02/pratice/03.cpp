#include<iostream>
using namespace std;

void cumsum(int &total, int n)
{
    total+=n;
}

int main(int argc, char const *argv[])
{
    int total=0;
    for (int i = 1; i <= 10; i++)
    {
        cumsum(total,i);
    }
    cout<<"sum="<<total<<endl;
    return 0;
}
