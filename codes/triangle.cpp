#include <iostream>
using namespace std;
main()
{
    double base, height;
    cout << "Enter base: " << endl;
    cin >> base;
    cout << "Enter height: " << endl;
    cin >> height;
    double area = (base * height) / 2;
    cout << "Area of triangle is: " << area << endl;
}