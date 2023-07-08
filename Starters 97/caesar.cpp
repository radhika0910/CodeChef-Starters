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
        string s, t, u;
        cin >> s >> t >> u;

        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        string res;
        int totalShifts = 0; // Variable to keep track of total shifts

        for (int i = 0; i < n; i++)
        {
            int start = alphabets.find(s[i]);
            int end = alphabets.find(t[i]);
            int shift = end - start;

            int newIndex = alphabets.find(u[i]) + shift;

            // Handle circular rotation
            if (newIndex >= 26)
                newIndex = (newIndex - 26) % 26;
            else if (newIndex < 0)
                newIndex = (newIndex + 26) % 26;

            res += alphabets[newIndex];
            totalShifts += shift; // Accumulate shifts
        }

        // Adjust totalShifts to account for multiple loops
        totalShifts %= 26;

        cout << res << endl;
    }

    return 0;
}
