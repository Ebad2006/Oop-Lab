#include <iostream>
#include <string>
using namespace std;

struct Employees
{
    string name;
    int hrsWorked;
    int hourlyRate;
};

int main()
{
    Employees employee;
    int n;
    cout << "Enter num of employees: ";
    cin >> n;
    Employees *emp = new Employees[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nenter details for employee " << i + 1 << ": " << endl;
        cout << "Name: ";
        cin >> emp[i].name;
        cout << endl
             << "Hours Worked: ";
        cin >> emp[i].hrsWorked;
        cout << endl
             << "Hourly Rate: ";
        cin >> emp[i].hourlyRate;
    }
    int totalsal;
    for (int i = 0; i < n; i++)
    {
        totalsal = emp[i].hourlyRate * emp[i].hrsWorked;
        cout << "Total salary of employee " << i + 1 << ": " << totalsal << endl;
    }
    delete emp;
}