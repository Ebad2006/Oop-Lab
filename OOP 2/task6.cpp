#include <iostream>
#include <string>
using namespace std;

struct Students
{
    string name;
    int rollNumber;
    int marks[3];
};

int main()
{
    Students student;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Students *stu = new Students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> stu[i].name;
        cout << endl;
        cout << "Enter roll number: ";
        cin >> stu[i].rollNumber;
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter marks of subject " << j + 1 << ": ";
            cin >> stu[i].marks[j];
            cout << endl;
        }
    }
    float avg;
    for (int i = 0; i < n; i++)
    {
        avg = (stu[i].marks[0] + stu[i].marks[1] + stu[i].marks[2]) / 3;
        cout << "Average marks of " << stu[i].name << ": " << avg << endl;
    }

    delete stu;
}