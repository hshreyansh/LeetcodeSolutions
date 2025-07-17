class Solution {
public:
int split(vector<int> &nums, int k, int mid)
    {
        int subarray=1,sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(sum+nums[i]<=mid)
            {
                sum+=nums[i];
            }
            else
            {
                subarray++;
                sum=nums[i];
            }
        }
        return subarray;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        int mid;
        int ans;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(split(nums,k,mid)<=k)
            {
                 ans=mid;
                 high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};