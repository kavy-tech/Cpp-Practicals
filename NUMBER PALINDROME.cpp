#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if original and reversed numbers are the same
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome number.";
    else
        cout << originalNum << " is not a palindrome number.";

    return 0;
}
