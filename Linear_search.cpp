#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int k);

int main()
{
    int n;
    cout << "Enter size of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter key to search : ";
    cin >> k;

    linear_search(arr, n, k);
}

int linear_search(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "Key is found on index " << i;
            return i;
        }
    }
    cout << "Element not found in array ";
    return -1;
}