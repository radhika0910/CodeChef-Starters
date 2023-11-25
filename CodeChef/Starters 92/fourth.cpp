#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int N, K, L;
    cin >> N >> K >> L;

    vector<int> playList;

    for (int i = 0; i < N; i++)
    {
        int length, Lang;
        cin >> length >> Lang;
        if (Lang == L)
        {
            playList.push_back(length);
        }
    }

    int numberOfSongs = playList.size();
    if (numberOfSongs < K)
    {
        cout << "-1" << endl;
        return;
    }

    sort(playList.begin(), playList.end());

    int totalLength = 0;
    int lastInd = numberOfSongs - 1;
    while (lastInd >= (numberOfSongs - K))
    {
        totalLength += playList[lastInd--];
    }

    cout << totalLength << endl;
}

int main()
{

    int T = 1;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
