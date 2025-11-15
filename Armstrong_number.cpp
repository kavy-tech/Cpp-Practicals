#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int n, r, sum = 0;

    cout << "Enter a three digit number : ";
    cin >> n;

    int copy = n;

    for (int i = 0; i < 3; i++)
    {

        r = n % 10;
        n = n / 10;
        sum += pow(r, 3);
    }

    if (sum == copy)
    {
        cout << "Yes its a armstrong number ";
    }
    else
    {
        cout << "No its not a armstorng number ";
    }
}