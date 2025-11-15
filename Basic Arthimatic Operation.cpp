#include <iostream>
using namespace std;

int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int a, b, ch;
	int result;

	cout << "Enter two numbers : ";
	cin >> a >> b;
	cout << "1.add\n2.sutract\n3.multiply\n4.divide " << endl;
	cout << "Enter your choice (integer) : ";
	cin >> ch;

	if (ch == 1)
	{
		cout << "Sum of numbers are : " << a + b << endl;
	}
	else if (ch == 2)
	{
		cout << "Subtraction of numbers are " << a - b << endl;
	}
	else if (ch == 3)
	{
		cout << "Multiplication of numbers are " << a * b << endl;
	}
	else if (ch == 4)
	{
		cout << "Division of numbers are " << a / b << endl;
	}
	else
	{
		cout << " Invalid choice ";
	}
}
