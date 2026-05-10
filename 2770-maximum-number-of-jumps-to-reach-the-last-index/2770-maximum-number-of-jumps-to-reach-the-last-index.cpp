class Solution {
public:
    int solve(int idx, vector<int>& nums, int target, vector<int>& dp) {
        int n = nums.size();
        int ans = -1e9;
        if (idx == n - 1)
            return 0;
        if (dp[idx] != -1)
            return dp[idx];
        

        for (int j = idx + 1; j < n; j++) {
            if (abs(nums[j] - nums[idx]) <= target) {
                ans = max(ans, 1 + solve(j, nums, target, dp));
            }
        }
        return dp[idx] = ans;
    }

    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> dp(n, -1);
        int ans = solve(0, nums, target, dp);
        return ans < 0 ? -1 : ans;
    }
};