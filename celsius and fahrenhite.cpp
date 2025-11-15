#include <iostream>
using namespace std;
int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int temp, ch;
	cout << "1.Celsius to Fahrenhite\n2.Fahrenhite to celsius :";
	cin >> ch;
	cout << "Enter Temperature : ";
	cin >> temp;
	switch (ch)
	{
	case 1:
		temp = ((9.0 / 5) * temp) + 32;
		cout << "temperature in fahrenhite is :" << temp << endl;
		break;
	case 2:
		temp = (temp - 32) * 5.0 / 9;
		cout << "temperature in celsius is :" << temp << endl;
		break;
	default:
		cout << "enter valid choice :";
	}
}
