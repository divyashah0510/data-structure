#include <iostream>
#include <algorithm> // We can use two new methods sort() and reverse() methods.
using namespace std;

main()
{
    int number = 0;
    cout << "Enter the number of Integers: " << endl;
    cin >> number;
    // int *numbers = new int[number];
    // Or
    int numbers[number] = {};
    for (int i = 0; i < number; i++)
    {
        cin >> numbers[i];
    }
    sort(numbers, numbers + number);
    for (int i = 0; i < number; i++)
    {
        cout << numbers[i] << " ";
    }
    reverse(numbers, numbers + number);
    for (int i = 0; i < number; i++)
    {
        cout << numbers[i] << " ";
    }
}