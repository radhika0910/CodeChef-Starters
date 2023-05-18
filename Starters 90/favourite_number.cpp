#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int a;
        cin >> a;
        if (a % 2 == 0 && a % 7 == 0)
            cout << "Alice" << endl;

        else if (a % 2 != 0 && a % 9 == 0)
            cout << "Bob" << endl;

        else
            cout << "Charlie" << endl;
    }
    return 0;
}