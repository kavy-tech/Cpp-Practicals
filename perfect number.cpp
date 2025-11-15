#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int n;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer.";
        return 0;
    }

    // Using a loop to calculate sum
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum;

    return 0;
}
