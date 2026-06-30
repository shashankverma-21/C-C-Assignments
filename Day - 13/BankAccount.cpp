#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void setBalance(double b)
    {
        balance = b;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void displayBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.setBalance(5000);
    b.deposit(2000);
    b.withdraw(1500);

    b.displayBalance();

    return 0;
}