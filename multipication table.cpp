#include <iostream>
using namespace std;

void table(int n);

int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int n;
	cout << "Enter number to print table : ";
	cin >> n;
	table(n);
}

void table(int n)
{

	for (int i = 1; i <= 10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
}
