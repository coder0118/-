#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 129;
    char b = a;
    cout << (int)b << endl;
    char *p = (char *)malloc(32);
    strcpy(p, "disen");
    cout << p << endl;
    return 0;
}
