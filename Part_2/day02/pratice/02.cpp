#include<iostream>
using namespace std;

typedef int FiveArr[5];

int main() {
    int arr[5]={1,2,3,4,5};
    int (&q)[5]=arr;
    q[0]=100;
    FiveArr &p=arr;
    p[1]=200;
    cout << q[0] << endl;
    cout << q[1] << endl;
    return 0;
}