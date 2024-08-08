#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int digits, sum = 0;
    while (n > 0)
    {
        digits = n % 10;
        // cout << "Digits = " << digits << endl;
        sum = sum + digits;
        // cout << "Sum = " << sum << endl;
        n = n / 10;
        // cout << "Number = " << n << endl;
    }
    cout << "Sum = " << sum;
    return sum;
}

main()
{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    sumOfDigits(number);
}