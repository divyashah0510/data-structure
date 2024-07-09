#include <iostream>
#include <cmath>

using namespace std;

void checkArmstrong(int n);

main()
{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    checkArmstrong(number);
}

void checkArmstrong(int n)
{
    int digits, sum = 0, noOfDigits = 0;
    int initialValue = n;
    int temp = n;
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
