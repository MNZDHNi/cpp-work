#include <iostream>
using namespace std;

int digit(int num, int k)
{
    for(int i = 0; i < k - 1; i++)
    {
        num /= 10;
    }
    return num % 10;
}

int main()
{
    int num, k;
    cin >> num >> k;

    cout << digit(num, k);
}