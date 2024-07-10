#include <iostream>
using namespace std;
main()
{
    int m = 0, n = 0;
    cout << "Square Matrix!!!" << endl;
    cout << "Enter m matrix = " << endl;
    cin >> m;
    cout << "Enter n matrix = " << endl;
    cin >> n;
    if (m == n)
    {
        int m_cross_n_matrix[m][n] = {};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m_cross_n_matrix[i][j];
            }
        }
        cout << "Before Transpose:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << m_cross_n_matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << "After Transpose:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << m_cross_n_matrix[j][i] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Tum chutiye ho !!" << endl;
    }
}