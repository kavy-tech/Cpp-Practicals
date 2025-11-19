#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i < num; ++i)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num && num > 0)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
    {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}