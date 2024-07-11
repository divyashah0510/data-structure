#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
main()
{
    int n, r;
    cout << "Enter value of n= " << endl;
    cin >> n;

    cout << "Enter value of r= " << endl;
    cin >> r;

    int result = 0; // nCr = n!/r!*(n-r)!
    result = factorial(n) / (factorial(r) * factorial(n - r));
    cout << result << endl;
}