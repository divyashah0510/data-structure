#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int noofDigits = n;
    int totalDigitsPlaceValue = 0;
    int reversedNumber = 0, remainder;
    while (noofDigits > 0)
    {
        noofDigits /= 10;
        totalDigitsPlaceValue++;
    }

    for (int i = 0; i < totalDigitsPlaceValue; i++)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number = " << reversedNumber << endl;
    return 0;
}

main()
{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    reverseNumber(number);
}