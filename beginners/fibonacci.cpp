#include <iostream>
using namespace std;

// bool checkFibonacciSeries(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     int startElement = 0;
//     int secondElement = 1;
//     int nextElement = startElement + secondElement;
//     while (nextElement <= n)
//     {
//         if (nextElement == n)
//         {
//             return true;
//         }
//         startElement = secondElement;
//         secondElement = nextElement;
//         nextElement = startElement + secondElement;
//     }
//     return false;
// }

// int main()
// {
//     int number = 0;
//     cout << "Enter a number: " << endl;
//     cin >> number;
//     if (checkFibonacciSeries(number))
//     {
//         cout << "Element is in Fibonacci Series" << endl;
//     }
//     else
//     {
//         cout << "Element is not in Fibonacci Series" << endl;
//     }
//     return 0;
// }
main()
{
    int firstNum = 0, secondNum = 1;
    int value = 0, sum = 0;
    cout << "Enter the value" << endl;
    cin >> value;
    for (int i = 0; i < value; i++)
    {
        sum = firstNum + secondNum;
        cout << sum << " ";
        firstNum = secondNum;
        secondNum = sum;
        if (value == sum)
        {
            cout << "\nValue found";
            break;
        }
        else
        {
            continue;
        }
    }
}