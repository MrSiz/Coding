class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length = nums.size();
        int ans = INT_MIN;
        vector<int> dp(length + 1, 0);
        for (int i = 0; i < length; ++i){
            dp[i + 1] = max(dp[i] + nums[i], nums[i]);
            if (dp[i + 1] > ans){
                ans = dp[i + 1];
            }
        }
        return ans;
    }
};