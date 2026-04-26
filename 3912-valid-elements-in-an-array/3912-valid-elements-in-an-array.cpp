class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        if(n == 1) return nums;
        ans.push_back(nums[0]);

        vector<int> rightMax(n);
        rightMax[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--) {
            rightMax[i] = max(nums[i], rightMax[i+1]);
        }
        int leftMax = nums[0];

        for(int i = 1; i < n-1; i++) {
            if(nums[i] > leftMax || nums[i] > rightMax[i+1]) {
                ans.push_back(nums[i]);
            }
            leftMax = max(leftMax, nums[i]);
        }
        ans.push_back(nums[n-1]);
        return ans;
    }
};