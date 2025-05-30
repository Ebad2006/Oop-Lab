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

    if (rows1 == rows2 && cols1 == cols2)
    {
        int add[rows1][cols1];
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                add[i][j] = m1[i][j] + m2[i][j];
            }
        }
        int sub[rows1][cols1];
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                sub[i][j] = m1[i][j] - m2[i][j];
            }
        }
        cout << "ADDITION:" << endl
             << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cout << add[i][j] << " ";
            }
            cout << endl;
        }
        cout << "SUBTRACTION:" << endl
             << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Dimensions of both matrices are not equal (operations not possible).";
    }

    delete m1, m2;
}