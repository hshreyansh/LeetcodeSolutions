class Solution {
public:
    int search(vector<int>&nums)
    {
        int n= nums.size();
        int s=0, e= n-1, mid;
        mid= s+(e-s)/2;

        while(s<=e)
        {
            mid= s+(e-s)/2;
            if(s==e)
            {
                return s;
            }
            if(mid&1) //even ya odd
            {
                if(mid-1>=0 && nums[mid-1]==nums[mid])
                {
                    s=mid+1;
                }
                else 
                e=mid-1;
            }
            else
            {
                if(mid+1<=n && nums[mid]==nums[mid+1])
                {
                    s=mid+2;
                }
                else
                {
                    e=mid;
                }
            }
        }
        return -1;
    }
    int singleNonDuplicate(vector<int>& nums) {
        int ans= search(nums);
        return nums[ans];
    }
};