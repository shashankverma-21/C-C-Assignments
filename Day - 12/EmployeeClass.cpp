#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID : " << id << endl;
    }
};

int main()
{
    Employee e("Rahul", 101);
    e.display();

    return 0;
}