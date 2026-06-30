#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    void setData(float l, float w)
    {
        length = l;
        width = w;
    }

    float area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;

    r.setData(10, 5);

    cout << "Area = " << r.area() << endl;

    return 0;
}