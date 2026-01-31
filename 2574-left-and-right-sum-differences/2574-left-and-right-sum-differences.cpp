class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        int sum = accumulate(nums.begin(), nums.end(),0);
        vector<int>ans;
        int leftsum=0;
        for(int i=0; i<n; i++){
            int rightsum = sum -leftsum -nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum += nums[i];

        }
        return ans;
    }
};