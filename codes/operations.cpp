#include <iostream>
#include <math.h>
using namespace std;

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is an even Number" << endl;
    }
    else
    {
        cout << n << " is an odd number" << endl;
    }
}
void checkPerfectSquare(int n)
{
    if (floor(sqrt(n)) == ceil(sqrt(n)))
    {
        cout << n << " is a perfect square" << endl;
    }
    else
    {
        cout << n << " is not a perfect square" << endl;
    }
}
void checkPrime(int n)
{
    if (n <= 1)
    {
        cout << "It is not a prime number" << endl;
    }
    else
    {
        for (int i = 2; i * i < n; i++)
        {
            if (n % i == 0)
            {
            }
        }
        cout << "It is a prime number" << endl;
    }
}
main()
{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    checkEvenOdd(number);
    checkPerfectSquare(number);
    checkPrime(number);
}