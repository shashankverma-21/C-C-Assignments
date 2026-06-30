#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s;
    s.getData();
    s.display();

    return 0;
}