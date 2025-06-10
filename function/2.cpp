#include <iostream>
using namespace std;

int n;

int fun(int num)
{
    if(num < 10)    return 0;
    
    int bit;
    int temp = num;
    while(temp != 0)
    {
        bit++;
        temp /= 10;
    }

    int base = 1;
    for(int i; i < bit - 1; i++)
    {
        base *= 10;
    }

    return num % base;
}

int main()
{
    cin >> n;

    cout << fun(n);
}