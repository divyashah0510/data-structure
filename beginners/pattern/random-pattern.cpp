#include <iostream>
using namespace std;

main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            // cout << j << " ";
            cout << " * ";
        }

        cout << endl;
    }
}