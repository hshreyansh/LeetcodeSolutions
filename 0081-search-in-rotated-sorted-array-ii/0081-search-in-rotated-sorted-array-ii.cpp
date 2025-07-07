class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[s]==nums[mid] && nums[mid]==nums[e]){
                s++;
                e--;
                continue;
            }
            if(nums[s]<=nums[mid])
            {
                if(nums[s]<=target && target<=nums[mid])
                {
                    e=mid-1;
                }
                else{ s=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target && target<=nums[e])
                {
                    s=mid+1;
                }
                else { 
                    e=mid-1;
                }
            }
        }
        return false;
    }
};