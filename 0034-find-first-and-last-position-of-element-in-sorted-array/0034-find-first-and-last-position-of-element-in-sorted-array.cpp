class Solution {
public:
    int first(vector<int>nums, int target, int s, int e)
    {
        int ans1=-1;
        
        while(s<=e)
        {
            int mid = s + (e - s) / 2;
            if(nums[mid]==target)
            {
                ans1=mid;
                e=mid-1;
            }
            else if(target<nums[mid]) e= mid-1;
            else  s=mid+1;
        }
        return ans1;
    }
    int last(vector<int>nums, int target, int s, int e)
    {
        int ans2=-1;
        
        while(s<=e)
        {
            int mid = s + (e - s) / 2;
            if(nums[mid]==target)
            {
                ans2=mid;
                s=mid+1;
            }
            else if(target<nums[mid]) e= mid-1;
            else s=mid+1;

        }
        return ans2;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        
        int s = 0;
        int e = nums.size()-1;

        int ans1= first(nums,target, s, e);
        result.push_back(ans1);

        int ans2= last(nums, target, s, e);
        result.push_back(ans2);

        return result;
    }
};