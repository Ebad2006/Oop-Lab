#include <iostream>
#include <string>
using namespace std;

class Apartment
{
    int ID;
    string address;
    string *name;

public:
    Apartment(int id, string add, string &owner) : ID(id), address(add)
    {
        name = new string(owner);
    }

    Apartment(const Apartment &copy) : ID(copy.ID), address(copy.address), name(copy.name) {}

    void display()
    {
        cout << "Apartment ID: " << ID << endl;
        cout << "Address: " << address << endl;
        cout << "Owner: " << *name << endl;
        cout << "\n" << endl;
    }

    ~Apartment()
    {
        delete name;
    }
};

int main()
{
    string name = "Hammad";
    Apartment aprt1(0001, "Gulistan-e-Johar", name);
    Apartment aprt2(0002, "Gulshan", name);

    Apartment copyaprt1 = aprt1;
    Apartment copyaprt2 = aprt2;
    aprt1.display();
    aprt2.display();
    copyaprt1.display();
    copyaprt2.display();
}