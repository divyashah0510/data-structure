#include <iostream>
using namespace std;

main()
{
    int number = 0, smallest_number = 0, largest_number = 0;
    cout << "Enter the number of Integers: " << endl;
    cin >> number;
    // int *numbers = new int[number];
    // Or
    int numbers[number] = {};

    for (int i = 0; i < number; i++)
    {
        cin >> numbers[i];
    }
    largest_number = numbers[0];
    smallest_number = numbers[0];
    for (int i = 1; i < number; i++)
    {
        if (largest_number < numbers[i])
        {
            largest_number = numbers[i];
        }
        if (smallest_number > numbers[i])
        {
            smallest_number = numbers[i];
        }
    }
    cout << "Largest Number = " << largest_number << endl;
    cout << "Smallest Number = " << smallest_number << endl;
}