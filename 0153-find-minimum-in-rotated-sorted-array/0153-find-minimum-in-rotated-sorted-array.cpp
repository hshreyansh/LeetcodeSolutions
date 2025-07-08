class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid;
        int ans=INT_MAX;

        while(s<=e)
        {
            mid=s+(e-s)/2;

            if(nums[s]<=nums[mid])
            {
                ans=min(ans,nums[s]);
                s=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                e=mid-1;
            }
        }
        return ans;
    }
};