#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter num of strings: ";
    cin >> n;
    string *arr = new string[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter string " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "UNSORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "SORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    delete arr;
}