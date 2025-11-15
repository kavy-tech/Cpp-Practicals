#include <iostream>
using namespace std;

int main()
{

    float l, b, area, perimeter;

    cout << " Enter length and breadth of rectangle ";
    cin >> l >> b;

    area = l * b;
    perimeter = 2 * (l + b);

    cout << "area of rectangle is " << area << endl;
    cout << "perimeter of rectangle is " << perimeter << endl;
}