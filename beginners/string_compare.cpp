#include <iostream>
using namespace std;

main()
{
    string s1, s2;
    cout << "Enter the string 1 = " << endl;
    cin >> s1;

    cout << "Enter the string 2 = " << endl;
    cin >> s2;
    if (s1.length() == s2.length())
    {
        cout << "Equal string" << endl;
    }
    else if (s1.length() > s2.length())
    {
        cout << "S1 is greater" << endl;
    }
    else
    {
        cout << "S2 is greater" << endl;
    }
}