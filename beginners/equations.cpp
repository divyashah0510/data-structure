#include <iostream>
#include <cmath>
using namespace std;

int function_1(int x, int y, int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += static_cast<int>(pow(x, 2)) * y;
    }
    return result;
}
int function_2(int x, int y, int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += x * static_cast<int>(pow(y, 2));
    }
    return result;
}
int function_3(int x, int y, int z, int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += x * y * z;
    }
    return result;
}

main()
{
    int n, x, y, z;
    cout << "Enter value of n= " << endl;
    cin >> n;

    cout << "Enter value of x= " << endl;
    cin >> x;

    cout << "Enter value of y= " << endl;
    cin >> y;

    cout << "Enter value of z= " << endl;
    cin >> z;

    int resultant = 0;
    resultant = function_1(x, y, n) + function_2(x, y, n) + function_3(x, y, z, n);
    cout << "Resultant = " << resultant << endl;
}