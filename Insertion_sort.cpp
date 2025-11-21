#include <iostream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int n = 5;

    int ar[n] = {10, 20, 5, 1, 40};

    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = ar[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (ar[j] > temp)
            {
                ar[j + 1] = ar[j];
            }
            else
            {
                break;
            }
        }
        ar[j + 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << ar[i] << ' ';
    }
}