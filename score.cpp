#include <iostream>
using namespace std;
int main()
{
	cout << "Kavy Vashishtha 25HEL2118 " << endl;
	int score;
	cout << "enter score : ";
	cin >> score;

	if (score >= 90)
	{
		cout << "You got A ";
	}
	else if (score >= 80)
	{
		cout << "You got B";
	}
	else if (score >= 70)
	{
		cout << "You got C";
	}
	else if (score >= 60)
	{
		cout << "You got D";
	}
	else if (score >= 50)
	{
		cout << "You got E";
	}
	else
	{
		cout << "You got F";
	}
}
