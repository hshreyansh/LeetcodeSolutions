class Solution {
public:
    int solve(vector<int>nums, int mid,int threshold)
    {
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
           sum+=ceil((double)nums[i]/mid); 
        }
        if(sum<=threshold)
        {
            return mid;
        }
        return 0;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=*max_element(nums.begin(), nums.end());
        int mid;
        int ans;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(solve(nums,mid,threshold))
            {
                ans=mid;
                h=mid-1;
                
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};