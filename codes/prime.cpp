#include <iostream>
#include <math.h>

using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    cout << n << " ";
    return true;
}
main()
{
    for (int i = 75; i <= 150; i++)
    {
        isPrime(i);
    }
}