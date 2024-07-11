#include <iostream>
using namespace std;

main()
{
    int number = 0;
    int even_sum = 0, odd_sum = 0;
    cout << "Enter the number of Integers: " << endl;
    cin >> number;
    int numbers[number] = {};
    for (int i = 0; i < number; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < number; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            // even logic
            even_sum++;
        }
        else
        {
            // odd logic
            odd_sum++;
        }
    }
    cout << "Even:" << even_sum << endl;
    cout << "Odd:" << odd_sum << endl;
}