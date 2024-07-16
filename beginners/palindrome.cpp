#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number = " << endl;
    cin >> number;
    int original_number = number;
    int temp = 0;
    int reversedNumber = 0;
    while (number > 0)
    {
        temp = number % 10;
        // cout << temp << endl;
        reversedNumber = reversedNumber * 10 + temp;
        // cout << reversedNumber << endl;
        number = number / 10;
    }
    if (reversedNumber != original_number)
    {
        cout << " Not Palindrome Number" << endl;
    }
    else
    {
        cout << "Palindrome Number" << endl;
    }
}