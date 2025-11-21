#include <iostream>
#include <cmath>
using namespace std;

float pattern(int n);

int main()
{

	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int n;
	float s, nu;

	cout << "Enter number : ";
	cin >> n;

	nu = pattern(n);
	cout << nu;
}

float pattern(int n)
{

	float s;
	for (int i = 1; i <= n; i++)
	{

		if (i % 2 == 0)
		{

			s -= 1 / pow(i, i);
		}
		else
		{
			s += 1 / pow(i, i);
		}
	}

	return s;
}
