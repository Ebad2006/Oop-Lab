#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for element [" << i << "]: ";
        cin >> *arr[i];
    }
    cout << "Values in the array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: " << *arr[i] << endl;
    }
    delete arr;
}