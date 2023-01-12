#include <iostream>

using namespace std;
int findHCF(int a, int b)
{
    int m, n;

    m = a;
    n = b;

    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }

    return m;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int a, b, ans;
        cin >> a >> b;

        ans = findHCF(a, b);

        
            cout << ans << endl;
       
    }
}