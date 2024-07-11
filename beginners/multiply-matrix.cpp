#include <iostream>
using namespace std;

main()
{
    int m1 = 0, n1 = 0;
    int m2 = 0, n2 = 0;
    cout << "Square Matrix!!!" << endl;
    cout << "Enter number of rows for matrix 1: ";
    cin >> m1;
    cout << "Enter number of columns for matrix 1: ";
    cin >> n1;
    cout << "Enter number of rows for matrix 2: ";
    cin >> m2;
    cout << "Enter number of columns for matrix 2: ";
    cin >> n2;

    if (n1 != m2)
    {
        cout << "Tum gadhe ho itna bhi nahi pata ki rows and column same hone chahiye corresponding matrix ke" << endl;
    }

    int matrix_1[m1][n1];
    int matrix_2[m2][n2];
    int result_matrix[m1][n2] = {}; // Initialize result matrix with zeros

    cout << "Enter values of matrix 1:" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> matrix_1[i][j];
        }
    }

    cout << "Enter values of matrix 2:" << endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> matrix_2[i][j];
        }
    }
    // Resultant Matrix
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                result_matrix[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }
    cout << "Result Matrix :" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << result_matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
