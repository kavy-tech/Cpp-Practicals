#include <iostream>

using namespace std;

void pattern(int n);

int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int n;

	cout << "Enter number of rows : ";
	cin >> n;

	pattern(n);
}

void pattern(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 65 + i; j >= 65; j--)
		{
			cout << (char)j << ' ';
		}
		cout << endl;
	}
}
