#include <iostream>
#include <string>
using namespace std;

struct books
{
    string title;
    string author;
    int year;
};

int main()
{
    books Book;
    int n;
    cout << "Enter number of  books: ";
    cin >> n;
    books *arr = new books[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter book title: ";
        cin >> arr[i].title;
        cout << endl;
        cout << "enter book author: ";
        cin >> arr[i].author;
        cout << endl;
        cout << "enter book year: ";
        cin >> arr[i].year;
        cout << endl;
    }
    int filteryear;
    cout << "enter a year to display books published after that year: ";
    cin >> filteryear;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].year > filteryear)
        {
            cout << "Book Title: " << arr[i].title << endl;
            cout << "Book Author: " << arr[i].author << endl;
            cout << "Book Year: " << arr[i].year << endl;
        }
    }
    delete arr;
}