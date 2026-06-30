#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void display()
    {
        cout << "Final Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.deposit(5000);
    b.withdraw(1500);

    b.display();

    return 0;
}
