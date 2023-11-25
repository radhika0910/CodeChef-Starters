#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    cout << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
