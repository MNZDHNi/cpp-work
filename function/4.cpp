#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main()
{
    int num;
    cin >> num;

    for(int i = 2; i < num / 2; i++)
    {
        if(isPrime(i) && isPrime(num - i))
        {
            cout << num << "=" << i << "+" << num - i;
            return 0;
        }
    }
}

bool isPrime(int n)
{
    if(n == 1)  return false;
    if(n == 2)  return true;
    if(n % 2 == 0)  return false;

    int limit = sqrt(n);
    for(int i = 3; i <= limit; i += 2)
    {
        if(n % i == 0)  return false;
    }
    return true;
}