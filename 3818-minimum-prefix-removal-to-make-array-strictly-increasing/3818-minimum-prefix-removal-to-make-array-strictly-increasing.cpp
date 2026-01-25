class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        
        int n= nums.size();
        int idx=0;
        for(int i=n-2; i>=0; i--){
            if(nums[i]>=nums[i+1]){
                idx=i+1;
                break;
            }
        }
        return idx;
    }
};