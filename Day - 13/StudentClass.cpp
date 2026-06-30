#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void setName(string n)
    {
        name = n;
    }

    void setRollNo(int r)
    {
        rollNo = r;
    }

    string getName()
    {
        return name;
    }

    int getRollNo()
    {
        return rollNo;
    }
};

int main()
{
    Student s;

    s.setName("Shashank");
    s.setRollNo(101);

    cout << "Student Name: " << s.getName() << endl;
    cout << "Roll Number: " << s.getRollNo() << endl;

    return 0;
}