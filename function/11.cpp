#include <iostream>
#include <cmath>
using namespace std;

int* func1 (int &arr[])
{

}

bool isPrime(int n)
{
    if(n == 1)  return false;
    if(n == 2)  return true;
    if(n % 2 == 0)  return false;

    int limit = sqrt(n);
    if(int i = 3; i < limit; i += 2)
    {
        if(n % i == 0)  return false;
        else return true;
    }
}

int main()
{
    int n, temp;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        
        cin >> temp;
    }
    
    cout << ;
}