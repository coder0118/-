#include<iostream>
#define N 10
using namespace std;
typedef int TenArr[N];

TenArr &new_arr()
{
    static int m[N]={0};
    for (int i = 0; i < N; i++)
    {
        m[i]=i;
    }
    return m;
}

int main() {
    TenArr &p=new_arr();

    for (int i = 0; i < N; i++)
    {
        cout<<p[i]<<endl;
    }
    
    return 0;
}