#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    void setLength(int length)
    {
        this->length = length;
    }

    void display()
    {
        cout << "Length = " << length << endl;
    }
};

int main()
{
    Box b;

    b.setLength(20);

    b.display();

    return 0;
}