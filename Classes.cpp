#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    float getl()
    {
        return length;
    }

    float getb()
    {
        return breadth;
    }

    void setl(float l);
    void setb(float b);

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
    }

    Rectangle()
    {
        length = 0;
        breadth = 0;
        cout << " Default constructor have been called \n";
    }

    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
        cout << " Parameterized constructor have been called \n";
    }

    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
        cout << " Copy constructor have been called \n";
    }

    ~Rectangle()
    {
        cout << "Destructor have been called ";
    }
};

void Rectangle::setl(float l)
{
    length = l;
}
void Rectangle::setb(float b)
{
    breadth = b;
}

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    Rectangle r1;
    Rectangle r2(2, 3);
    Rectangle r3(r2);

    cout << r1.getl() << ' ' << r1.getb() << endl;
    cout << r2.getl() << ' ' << r2.getb() << endl;
    cout << r3.getl() << ' ' << r3.getb() << endl;

    r1.setl(4);
    r1.setb(5);

    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
}