#include <iostream>
using namespace std;

int min(int arr[], int n);
int max(int arr[], int n);
int sum(int arr[], int n);
void reverse(int arr[], int n);

int main()
{
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ch;
    cout << "what u want to do \n1.Minimum \n2.Maximum \n3.Sum \n4.Reverse \n";
    cin >> ch;

    switch (ch)
    {
    case 1:
        min(arr, n);
        break;
    case 2:
        max(arr, n);
        break;
    case 3:
        sum(arr, n);
        break;
    case 4:
        reverse(arr, n);
        break;
    default:
        cout << "Invalid Choice ";
    }
}

int min(int arr[], int n)
{
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (mn > arr[i])
        {
            mn = arr[i];
        }
    }

    cout << "Minimum element in array is " << mn << endl;

    return mn;
}

int max(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }

    cout << "Maximum element in array is " << mx << endl;

    return mx;
}

int sum(int arr[], int n)
{
    int su = 0;
    for (int i = 0; i < n; i++)
    {
        su += arr[i];
    }

    cout << "sum of all elements is " << su << endl;

    return su;
}

void reverse(int arr[], int n)
{

    int temp = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}