class Solution {
public:

    const int mod = 1000000007;

    int reverse(int a) {
        int b = 0;
        while (a > 0) {
            b = b * 10 + (a % 10);
            a /= 10;
        }
        return b;
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> diff(n);
        for(int i=0; i<n; i++) {
            diff[i] = nums[i] - reverse(nums[i]);
        }

        unordered_map<int, long long> mp;
        for(auto it : diff){
            mp[it]++;
        }

        long long ans = 0;
        for(auto it : mp) {
            ans += (it.second * (it.second - 1)) / 2;
             ans %= mod;
        }
        return ans;
    }
};