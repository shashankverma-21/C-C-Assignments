#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;   // Pure virtual function
};

class Car : public Vehicle
{
public:
    void start() override
    {
        cout << "Car has started." << endl;
    }
};

int main()
{
    Car c;
    c.start();

    return 0;
}