#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int num1, num2;

	cout << "Enter two positive integers: ";
	cin >> num1 >> num2;

	cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

	return 0;
}
