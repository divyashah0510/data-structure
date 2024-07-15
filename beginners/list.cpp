#include <iostream>
#include <algorithm>
using namespace std;

main()
{

    struct student
    {
        string name;
        int roll_number;
        int physics;
        int maths;
        int chemistry;
    };
    int n;
    string input_name = "";
    cout << "Enter the number of students =" << endl;
    cin >> n;
    struct student s[n];
    int *sum = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of student " << i + 1 << ":" << endl;
        cin >> s[i].name;
        cout << "Enter Roll Number: " << endl;
        cin >> s[i].roll_number;
        cout << "Enter Maths marks:" << endl;
        cin >> s[i].maths;
        cout << "Enter Physics marks:" << endl;
        cin >> s[i].physics;
        cout << "Enter Chemistry marks:" << endl;
        cin >> s[i].chemistry;
        sum[i] += s[i].chemistry + s[i].maths + s[i].physics;
    }
    // To store and rand rank the students

    cout << "Enter the name whose results are to be fetched ?" << endl;
    cin >> input_name;

    for (int i = 0; i < n; i++)
    {
        if (s[i].name == input_name)
        {
            cout << "******************************" << endl;
            cout << "Name:\t" << s[i].name << "Roll No.:\t" << s[i].roll_number << endl;
            cout << "Chemistry:\t" << s[i].chemistry << "Maths:\t" << s[i].maths << endl;
            cout << "Physics:\t" << s[i].physics << endl;
            break;
        }
    }
    cout << "Rank List of Students: " << endl;

    for (int i = 0; i < n; i++)
    {
        sort(sum, sum + n);
        cout << s[i].name << endl;
    }
}