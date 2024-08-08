#include <iostream>
using namespace std;

main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int col = 0; col < (i * 2) - 1; col++)
        {
            cout << i;
        }

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int col = n; col >= rows; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = n; cols >= rows; cols--)
        {
            cout << " ";
        }
        for (int cols = 1; cols <= rows - 1; cols++)
        {
            cout << cols;
        }

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << " ";
        }
        for (int cols = n; cols >= rows; cols--)
        {
            cout << cols;
        }

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << rows;
        }
        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = rows; cols <= n; cols++)
        {
            cout << rows;
        }

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = rows; cols <= n; cols++)
        {
            cout << " ";
        }
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << rows;
        }

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << " ";
        }

        for (int cols = rows; cols <= n; cols++)
        {
            cout << rows;
        }
        cout << endl;
    }
    for (int rows = 1; rows < n; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        cout << endl;
    }
    int x = 1;
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << x++;
        }
        cout << endl;
    }
    for (char rows = 97; rows <= 101; rows++)
    {
        for (char cols = 97; cols <= rows; cols++)
        {
            cout << rows;
        }
        cout << endl;
    }
    char y = 97;
    // for (char rows = 97; rows <= 101; rows++)
    // {
    //     for (char cols = 97; cols <= rows; cols++)
    //     {
    //         cout << y++;
    //     }
    //     cout << endl;
    // }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = n - 1; cols >= rows; cols--)
        {
            cout << " ";
        }
        for (int cols = 1; cols < (2 * rows); cols++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= rows - 1; cols++)
        {
            cout << " ";
        }
        for (int cols = (2 * n) - rows; cols >= rows; cols--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        int coeff = 1;
        for (int cols = n; cols >= rows; cols--)
        {
            cout << " ";
        }
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << coeff << " ";
            coeff = coeff * (rows - cols) / cols;
        }
        cout << endl;
    }
    for (char rows = 97; rows <= 101; rows++)
    {
        for (char cols = 97; cols <= rows; cols++)
        {
            if (y % 2 == 0)
            {
                cout << (y - 32);
                y++;
            }
            else
            {
                cout << y++;
            }

            // cout << y++;
        }
        cout << endl;
    }
}