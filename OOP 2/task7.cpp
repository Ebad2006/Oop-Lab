#include <iostream>
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter num of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter num of cols for matrix 1: ";
    cin >> cols1;
    cout << "Enter num of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter num of cols for matrix 2: ";
    cin >> cols2;

    int **m1 = new int *[rows1];
    for (int i = 0; i < rows1; i++)
    {
        m1[i] = new int[cols1];
    }

    int **m2 = new int *[rows2];
    for (int i = 0; i < rows2; i++)
    {
        m2[i] = new int[cols2];
    }

    cout << "Enter the elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }

    cout << "Enter the elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }
    if (cols1 == rows2)
    {
        int **m3 = new int *[rows1];
        for (int i = 0; i < rows1; i++)
        {
            m3[i] = new int[cols2];
        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                m3[i][j] = 0;
            }
        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                for (int k = 0; k < cols1; k++)
                {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        cout << "Resultant Matrix:" << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
        delete m3;
    }
    delete m1, m2;
}