#include <iostream>
using namespace std;

int func(int a, int b)
{
    int ge = a % 10;
    int qian = a /= 10;
    return qian * 1000 + ge + b * 10;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << func(a, b);
}