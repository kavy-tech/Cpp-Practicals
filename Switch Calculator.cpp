#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int num1, num2, choice;
    float result;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "\nSelect operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Result = " << result;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result = " << result;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result = " << result;
        break;
    case 4:
        if (num2 != 0)
            result = (float)num1 / num2;
        else
        {
            cout << "Error: Division by zero is not allowed.";
            return 0;
        }
        cout << "Result = " << result;
        break;
    default:
        result = num1 * num1;
        cout << "Invalid choice! Performing square of first integer.\n";
        cout << "Result = " << result;
    }

    return 0;
}
