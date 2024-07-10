#include <iostream>
using namespace std;

main()
{
    int m = 0, n = 0, sum = 0;
    cout << "Enter m matrix = " << endl;
    cin >> m;
    cout << "Enter n matrix = " << endl;
    cin >> n;
    int m_cross_n_matrix[m][n] = {};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m_cross_n_matrix[i][j];
            sum = sum + m_cross_n_matrix[i][j];
        }
    }
    int mean_Of_Matrix = sum / (m + n);
    cout << "Mean of Matrix = " << mean_Of_Matrix << endl;
    cout << "Sum of Matrix = " << sum << endl;
}