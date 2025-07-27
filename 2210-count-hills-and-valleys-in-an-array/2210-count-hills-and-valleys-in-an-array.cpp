class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        for(int i=1; i<nums.size()-1; i++){
            int j=0;
            if(nums[i]>nums[j] && nums[i]>nums[i+1]){
                count++;
                if(nums[i]==nums[i+1]){
                    i++;
                }
            }
            else if(nums[i]<nums[j] && nums[i+1]>nums[i]){
                count++;
            }
        }
        return count;
    }
};