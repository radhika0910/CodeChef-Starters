#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        const unsigned int M = 1000000007;
        int n;
        int k;
        cin >> n >> k;

        unsigned long long int count = 1;
        // if(k==n)
        // cout<<k<<endl;
        // else
        // {
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                count = (k * count) % M;
                k--;
            }
            else
                break;
        }
        cout << count << endl;
        // }
    }
    return 0;
}