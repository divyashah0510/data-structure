#include <iostream>
using namespace std;

main()
{
    int number = 0, sum = 0;
    cout << "Enter the number of Integers: " << endl;
    cin >> number;
    // int *numbers = new int[number];
    // Or
    int numbers[number] = {};

    for (int i = 0; i < number; i++)
    {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }
    cout << "You entered:" << endl;
    for (int i = 0; i < number; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    int average = sum / number;
    cout << "Sum of Number = " << sum << endl;
    cout << "Average of numbers = " << average;
    // delete[] numbers;
}