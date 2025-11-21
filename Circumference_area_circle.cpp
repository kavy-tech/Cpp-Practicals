#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy 25HEL2118" << endl;
    const float pi = 3.14;
    float r, c, a;

    cout << "Enter radius of circle ";
    cin >> r;

    a = pi * (r * r);
    c = 2 * pi * r;

    cout << "Area of circle is " << a << endl;
    cout << "Circumference of circle is " << c << endl;
}