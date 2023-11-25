class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
    int sum = 0 ; 
    for(int i =0 ;i<nums.size();i++)
    {
        sum+=nums[i];
    }   
    int n = nums.size();
    vector<int>ans(n);
    int left = 0;
    for(int i = 0; i < n;i++)
    {
        ans[i] = (nums[i] * i - left  )+( (sum - left - nums[i]) - (nums[i] * (n-i-1)));
        left +=nums[i];
    }
    return ans;
}
};