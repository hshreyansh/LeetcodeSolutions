class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n= nums.size();
        int totalsum =nums[0];
        int currmin=nums[0];
        int currmax=nums[0];
        int maxsum = nums[0];
        int minsum = nums[0];

        for(int i=1; i<n; i++){
            totalsum += nums[i];
            currmax = max(nums[i], currmax + nums[i]);
            currmin = min(nums[i], currmin +nums[i]);

            maxsum = max(currmax, maxsum);
            minsum = min(currmin, minsum);

        }
        int circularsum = totalsum - minsum;
        if(maxsum>0){
            return max(circularsum , maxsum);
        }
        return maxsum;
    }
};