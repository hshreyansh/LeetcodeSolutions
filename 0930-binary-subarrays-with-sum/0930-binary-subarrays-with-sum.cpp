class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l=0, r=0, currsum=0, count=0;
        int cnt_zeros=0;
        if(goal<0) return 0;
        while(r<nums.size()){
            currsum+=nums[r];
            
            while(l<r &&(nums[l]==0 || currsum > goal)){
                if(nums[l]==0){
                    cnt_zeros++;
                }
                else{
                    cnt_zeros=0;
                }
                currsum=currsum-nums[l];
                l++;
            }
            if(currsum==goal){
                count+= 1+cnt_zeros;
            }
            r++;
        }
    return count;
    }
};