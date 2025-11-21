#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int r1, c1;

    cout << "Enter rows and columns in matrix ";
    cin >> r1 >> c1;

    int r2 = c1;
    int c2 = r1;

    int arr1[r1][c1];
    int arr2[r2][c2];

    cout << "Enter element of matrix " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            {
                arr2[i][j] = arr1[j][i];
            }
        }
    }

    cout << "Array tranposed " << endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
}