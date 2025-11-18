#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int r1, c1;
    int r2, c2;

    cout << "Enter rows and columns in first matrix ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns in second matrix ";
    cin >> r2 >> c2;

    if (r1 != r2 || c1 != c2)
    {
        cout << "Matrices not compatible for addition ";
        return 0;
    }

    int r3 = r1;
    int c3 = c1;

    int arr1[r1][c1] = {0};
    int arr2[r2][c2] = {0};
    int arr3[r3][c3] = {0};

    cout << "Enter element of first matrix " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter element of second matrix " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "Sum of matrices is :  " << endl;
    for (int i = 0; i < r3; i++)
    {
        for (int j = 0; j < c3; j++)
        {
            arr3[i][j] = (arr1[i][j] + arr2[i][j]);
            cout << arr3[i][j] << ' ';
        }
        cout << endl;
    }
}
