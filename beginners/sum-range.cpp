#include <iostream>
using namespace std;
main()
{
    int sum = 0;
    for (int i = 5; i * (i + 1) < 400; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << endl
         << sum << endl;
}