class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int total = 0, n = piles.size();
        for(int i = n/3; i < n ; i+=2){
            total += piles[i];
        }
        return total;
    }
};