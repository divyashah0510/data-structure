#include <iostream>
using namespace std;
main()
{
    double x, y, z;
    cout << "Enter number 1:" << endl;
    cin >> x;
    cout << "Enter number 2:" << endl;
    cin >> y;
    cout << "Enter number 3:" << endl;
    cin >> z;
    double result = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    cout << result << endl;
}