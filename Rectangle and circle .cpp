#include <iostream>
using namespace std;
int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	float a, b;			 // Letting variables for length and breadth
	int area, perimeter; // Letting variables for area and perimeter

	cout << "Enter length and breadth of reactangle : "; // Taking input length and breadth
	cin >> a >> b;										 // Storing length in a and bradth in b

	area = int(a * b);			  // Calculating area and storing it in area variable
	perimeter = int(2 * (a + b)); // Calculating perimeter and storing it in perimeter variable

	cout << "Area of rectangle is " << area << endl;		   // Printing area of rectangle
	cout << "Perimeter of rectangle is " << perimeter << endl; // Printing perimeter of rectangle

	float r;		   // Letting variable to store radius
	int circumference; // Letting variable for circumference

	cout << "Enter radius of cicrle  " << endl; // Taking input of radius
	cin >> r;									// Storing radius in r variable

	area = int(3.14 * (r * r));		   // Calculating area and storing it in Area variable
	circumference = int(2 * 3.14 * r); // Calculaitng circumference and storing it in Circumference variable

	cout << "Area of circle of radius " << r << " is " << area << endl; // Printing area of circle
	cout << "Circumference of circle is " << circumference;				// Printing circumference of circle
}
