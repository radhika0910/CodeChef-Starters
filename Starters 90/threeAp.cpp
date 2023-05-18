#include <iostream>
#include <algorithm>
using namespace std;

bool isAP(int arr[], int n)
{
    if (n < 3)
    {
        return false;
    }

    sort(arr, arr + n); // Sort the array in ascending order

    for (int i = 0; i <= n - 3; i++)
    {
        int a = arr[i];
        for (int j = i + 1; j <= n - 2; j++)
        {
            int b = arr[j];
            int diff = b - a;
            int c = b + diff;
            if (binary_search(arr + j + 1, arr + n, c))
            {
                return true; // Found an arithmetic progression
            }
        }
    }

    return false; // No arithmetic progression found
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int n, arr[100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (isAP(arr, n))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
