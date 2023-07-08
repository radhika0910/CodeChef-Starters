#include <bits/stdc++.h>
using namespace std;

void solve()
{

    // Take the inputs
    long long n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for (auto &i : vec)
    {
        cin >> i;
    }

    // Sorting the vector
    sort(vec.begin(), vec.end());

    map<long long, int> mp;
    long long current = 0;

    // Take only values upto n-2, because there are no triplets with 2 numbers
    for (int i = 0; i < n - 2; i++)
    {
        current += ((n - i - 2) * (n - i - 1)) / 2;
        mp.insert({current, vec[i]});
    }

    // We use lower_bound function because we have to find the kth smallest element
    for (int i = 0; i < q; i++)
    {
        long long temp = 0;
        cin >> temp;
        cout << mp.lower_bound(temp)->second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
}