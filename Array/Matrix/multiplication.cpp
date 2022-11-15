#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Enter the row and column of first matrix : ";
    int row1, col1;
    cin >> row1 >> col1;

    cout << "Enter the row and colums of second matrix : ";
    int row2, col2;
    cin >> row2 >> col2;

    int mat1[row1][col1];
    int mat2[row2][col2];

    cout << "Enter the first matrix : \n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the second matrix : \n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    if (col1 == row2)
    {
        int matrix[row1][col2];
        memset(matrix, 0, sizeof(matrix));
      
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    matrix[i][j] += (mat1[i][k] * mat2[k][j]);
                }
            }
        }
        
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < col2; j++) 
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else cout << "Multiplication isn't possible!" << endl;

    return 0;
}
