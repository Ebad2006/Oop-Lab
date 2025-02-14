#include <iostream>
#include <string>
using namespace std;

class Wallet
{
private:
    string ownerName;
    double totalBalance;
    double initialbal;
    string transactionHistory[500];
    int count;

public:
    Wallet(string name, double intbal)
    {
        ownerName = name;
        totalBalance = intbal;
        initialbal = intbal;
        count = 0;
    }

    void addmoney(double amount)
    {
        if (amount > 0)
        {
            totalBalance = totalBalance + amount;
            transactionHistory[count] = "Added Amount: " + to_string(amount);
            count++;
            cout << "Amount Added" << endl;
        }
        else
        {
            cout << "Amount not added. Enter positive amount";
        }
    }

    void spendmoney(double amount)
    {
        if (amount > totalBalance)
        {
            cout << "Balance not enough" << endl;
        }
        else if (amount < 0)
        {
            cout << "Error! Enter positive amount" << endl;
        }
        else
        {
            totalBalance = totalBalance - amount;
            transactionHistory[count] = "Amount Withdrawn: " + to_string(amount);
            count++;
            cout << "Withdrawal Succesful. Remaining Balance: " << totalBalance << endl;
        }
    }

    void displayhistory()
    {
        cout << "Transaction History: " << endl
             << endl;
        if (count == 0)
        {
            cout << "No transaction done yet" << endl;
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                cout << transactionHistory[i] << endl;
            }
        }
    }

    void low()
    {
        if (totalBalance <= initialbal / 2)
        {
            cout << "Balance Low" << endl;
        }
        else
        {
            cout << "Balance Not Low" << endl;
        }
    }

    void displaybal()
    {
        cout << "Total Balance: " << totalBalance << endl;
    }
};

int main()
{
    Wallet sw("Saad", 50000);
    sw.addmoney(10000);
    sw.displaybal();
    sw.spendmoney(20000);
    sw.spendmoney(10000);
    sw.displaybal();
    sw.low();
    sw.displayhistory();
}