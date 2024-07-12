#include <iostream>
#include <algorithm>

using namespace std;

void sort_function(int n[], int number)
{
    sort(n, n + number);
    cout << "Sort list is = " << endl;
    for (int i = 0; i < number; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

void search_function(int n[], int number, int x)
{
    for (int i = 0; i < number; i++)
    {
        if (x == n[i])
        {
            cout << "Found the value!!" << endl;
            break;
        }
    }
}

void delete_function(int n[], int &number, int x)
{
    int i;
    for (i = 0; i < number; i++)
    {
        if (n[i] == x)
        {
            break;
        }
    }
    if (i == number)
    {
        cout << "Element not found" << endl;
        return;
    }

    for (int j = i; j < number - 1; j++)
    {
        n[j] = n[j + 1];
    }
    number--;
    cout << "Deletion successful!!" << endl;
}

void insert_function(int *&n, int &number, int x)
{
    // Check for duplicates
    for (int i = 0; i < number; i++)
    {
        if (n[i] == x)
        {
            cout << "Element already exists in the array" << endl;
            return;
        }
    }

    // Create a new array with one extra space
    int *new_array = new int[number + 1];

    // Copy old elements to the new array
    for (int i = 0; i < number; i++)
    {
        new_array[i] = n[i];
    }

    // Add the new element
    new_array[number] = x;

    // Update the number of elements
    number++;

    // Delete the old array
    delete[] n;

    // Update the array pointer to point to the new array
    n = new_array;

    cout << "Element added successfully" << endl;
}

main()
{
    int number = 0, search_value, delete_value, inserion_value;
    cout << "Enter number of elements for array = " << endl;
    cin >> number;
    int *numbers = new int[number];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> numbers[i];
    }
    int operation = 1;
    cout << "Enter your choice = " << endl;
    while (operation != 0)
    {
        cout << "\t1 for Sort \n\t2 for Search \n\t3 for Delete \n\t4 for Insert" << endl;
        cin >> operation;
        switch (operation)
        {
        case 1:
            // sort
            sort_function(numbers, number);
            break;

        case 2:
            // search
            cout << "Enter number present in array = " << endl;
            cin >> search_value;
            search_function(numbers, number, search_value);
            break;

        case 3:
            // delete
            cout << "Enter number present in array = " << endl;
            cin >> delete_value;
            delete_function(numbers, number, delete_value);
            break;
        case 4:
            int insert_value;
            cout << "Enter number to insert = " << endl;
            cin >> insert_value;
            insert_function(numbers, number, insert_value);
            break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "Chuitye sahi option toh daal " << endl;
            break;
        default:
            cout << "Program Done" << endl;
            break;
        }
    }
}