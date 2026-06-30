#include <iostream>
using namespace std;

class Car
{
private:
    static int count;

public:
    Car()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Total Cars Created = " << count << endl;
    }
};

int Car::count = 0;

int main()
{
    Car c1;
    Car c2;
    Car c3;

    Car::displayCount();

    return 0;
}