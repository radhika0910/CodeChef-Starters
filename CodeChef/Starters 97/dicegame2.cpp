#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        int sum1 = a + b + c - min({a, b, c});
        int sum2 = d + e + f - min({d, e, f});

        if (sum1 > sum2)
        {
            cout << "Alice\n";
        }
        else if (sum1 < sum2)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Tie\n";
        }
    }

    return 0;
}
