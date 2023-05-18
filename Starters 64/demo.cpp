// #include <iostream>
// using namespace std;

// int combinations(int arr[], int n, int r, int index, int data[], int i)
// {
//     if (index == r)
//     {
//         // for (int j = 0; j < r; j++)
//         // {
//         //     cout << data[j] << " ";
//         // }
//         // cout << endl;

//         if((data[1]-data[0])==(data[1]-data[0]))
           
//         return 1;

//     }

//     if (i >= n)
//         return ;

//     data[index] = arr[i];

//     // Ensure ascending order
//     if (index == 0 || data[index] > data[index - 1])
//         combinations(arr, n, r, index + 1, data, i + 1);

//     combinations(arr, n, r, index, data, i + 1);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {
//         t--;
//         int n, arr[100];
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//         cin >> arr[i];
//         }
//         int r = 3;
//         int data[r];
//         int flag;

//         flag = combinations(arr, n, r, 0, data, 0);

//     }
//         return 0;
//     }
#include <iostream>
using namespace std;

int combinations(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r)
    {
        if ((data[1] - data[0]) == (data[2] - data[1]))
            return 1;
        else
            return 0;
    }

    if (i >= n)
        return 0;

    data[index] = arr[i];

    if (index == 0 || data[index] > data[index - 1]){
        if ((combinations(arr, n, r, index + 1, data, i + 1))==1)
            return 1;
            return combinations(arr, n, r, index + 1, data, i + 1);
    }
    return combinations(arr, n, r, index, data, i + 1);
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
        int r = 3;
        int data[r];

        int flag = combinations(arr, n, r, 0, data, 0);

        if (flag == 1)
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
