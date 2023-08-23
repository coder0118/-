#include<iostream>
using namespace std;

void sun(int &total,int n)
{
    total+=n;
}

int main() {
    int total=0;
    for (int i = 1; i <= 10; i++)
    {
        sun(total,i);
    }
    cout<<total<<endl;
   return 0;
}