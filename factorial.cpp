#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
};

int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int a;
	cout << "enter a number ";
	cin >> a;
	cout << factorial(a);
}
