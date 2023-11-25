#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, total = 0, flag = 0;
        for (auto &ch : s)
        {
            if (ch == ':' and a == 0)
                flag = 1;
            else if (ch == ')' and flag == 1)
                a = 1;
            else if (ch == '(')
            {
                a = 0;
                flag = 0;
            }
            else if (ch == ':' and a == 1)
            {
                total += 1;
                a = 0;
            }
        }
        cout << total << endl;
    }
}