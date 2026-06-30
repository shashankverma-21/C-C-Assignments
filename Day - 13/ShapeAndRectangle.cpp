#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void display()
    {
        cout << "This is a Shape." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display() override
    {
        cout << "This is a Rectangle." << endl;
    }
};

int main()
{
    Rectangle r;
    r.display();

    return 0;
}