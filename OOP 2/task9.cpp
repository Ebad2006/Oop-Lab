#include <iostream>
#include <string>
using namespace std;

struct Inventory
{
    int productID;
    string name;
    int quantity;
    int price;
};

int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Inventory *product = new Inventory[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter product id: ";
        cin >> product[i].productID;
        cout << endl;
        cout << "Enter product name: ";
        cin >> product[i].name;
        cout << endl;
        cout << "Enter product quantity: ";
        cin >> product[i].quantity;
        cout << endl;
        cout << "Enter product price: ";
        cin >> product[i].price;
        cout << endl;
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + (product[i].quantity * product[i].price);
    }
    cout << "Total value of products: " << total;
    delete product;
}