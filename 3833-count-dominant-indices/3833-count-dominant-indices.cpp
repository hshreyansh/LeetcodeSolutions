class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int sum =  accumulate(nums.begin(), nums.end(),0);
        int count=0;
        int n =  nums.size();
        if(n<=1) return 0;
        for(int i=0; i<n-1; i++){
            sum = sum - nums[i];
            int divide = n-i-1;
            if(nums[i] * divide > sum) count++;
        }
        return count;
    }
};