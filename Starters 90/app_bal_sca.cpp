#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll m, n;
    cin >> m >> n;

    if (m < n)
        cout << "NO" << endl;
    else
    {
        ll min = m;
        while (!(m & 1))
        {
            m = m / 2;
        }
        if (n % m == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

