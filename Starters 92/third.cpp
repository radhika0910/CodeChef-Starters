#include <iostream>

using namespace std;

bool isTilingPossible(int width, int length)
{
    int area = width * length;
    return area % 2 == 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int width, length;
        cin >> width >> length;

        if (isTilingPossible(width, length))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
