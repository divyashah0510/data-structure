#include <iostream>
using namespace std;
main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0 && i % 5 != 0)
        {
            cout << i << endl;
        }
    }
}