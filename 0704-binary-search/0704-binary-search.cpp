class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(s==e) return s;
            
            if(target<nums[mid])
            {
                e=mid-1;
            }
            else if(target>nums[mid])
            {
                s=mid+1;
            }
            else if(nums[mid]==target)
            {
                return mid;
            }
        }
        return -1;
    }
};