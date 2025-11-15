#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int n;
	int s;

	cout << "Enter number : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{

		if (i % 2 == 0)
		{
			s -= pow(i, n);
		}
		else
		{
			s += pow(i, n);
		}
	}

	cout << "Sum of series is " << s;
}
