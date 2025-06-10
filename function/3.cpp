#include <iostream>
#include <cmath>
using namespace std;

float num;

float func(float x)
{
    if(x <= 0)
    {
        return sin(x) + 1.0;
    }
    else if(x >= 10)
    {
        return sqrt(x + 4.0);
    }
    else
    {
        return x * x + 3.0 / x;
    }
}

int main()
{
    cin >> num;
    cout << func(num);
}