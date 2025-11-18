#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int k)
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    int low = arr[0];
    int high = arr[n - 1];

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int n;
    cout << "Enter size of array : ";
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

    int i = binary_search(arr, n, k);

    if (i != -1)
    {
        cout << "Key is found on index " << i;
    }
    else
    {
        cout << "Key is not in the array  ";
    }

    return 0;
}
