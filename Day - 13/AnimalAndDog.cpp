#include <iostream>
using namespace std;

class Animal
{
public:
    void showAnimal()
    {
        cout << "This is an Animal." << endl;
    }
};

class Dog : public Animal
{
public:
    void showDog()
    {
        cout << "Dog is derived from Animal." << endl;
    }
};

int main()
{
    Dog d;

    d.showAnimal();
    d.showDog();

    return 0;
}
