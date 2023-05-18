#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0;
        cin >> n;
        string s;
        cin >> s;
        int hash[26] = {0};
        for (char c : s)
            hash[c - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] > 0)
                temp++;
        }
        int palindrome = 0;
        if (s.length() % 2 == 0)
        {
            bool p = true;
            for (int i = 0; i < 26; i++)
            {
                if (hash[i] % 2 != 0)
                    p = false;
            }
            if (p)
                palindrome++;
        }
        else
        {
            int odd = 0;
            for (int i = 0; i < 26; i++)
            {
                if (hash[i] % 2 != 0)
                    odd++;
            }
            if (odd == 1)
                palindrome++;
        }

        if (temp == 1)
        {
            if (s.length() % 2 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if (palindrome == 1)
            cout << 1 << endl;
        else if (palindrome == 0)
            cout << 0 << endl;
    }
    return 0;
}
