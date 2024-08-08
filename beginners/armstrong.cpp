#include <iostream>
#include <cmath>

using namespace std;

void checkArmstrong(long long int n);

main()
{
    long long int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    checkArmstrong(number);
}

void checkArmstrong(long long int n)
{
    long long int digits, sum = 0, noOfDigits = 0;
    long long int initialValue = n;
    long long int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        noOfDigits++;
    }

    while (n > 0)
    {
        digits = n % 10;
        cout << "Digits = " << digits << endl;
        digits = pow(digits, noOfDigits);
        cout << "Digits square = " << digits << endl;
        sum = sum + digits;
        cout << "Sum = " << sum << endl;
        n = n / 10;
        cout << "N value = " << n << endl;
    }
    if (sum == initialValue)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not armstrong Number" << endl;
    }
}
