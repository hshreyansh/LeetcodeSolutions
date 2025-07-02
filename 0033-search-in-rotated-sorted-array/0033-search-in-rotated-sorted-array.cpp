class Solution {
public:
    int findpivotIndex(vector<int>&nums)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e)
        {   
            if(s==e) return s;

            mid=s+(e-s)/2;
            if(mid+1<n && nums[mid]>nums[mid+1]) //handle negative case
            {
                return mid;
            }
            else if(mid-1>=0 && nums[mid]<nums[mid-1]) //handle negative edge
            {
                return mid-1;
            }
            else if(nums[s]>nums[mid])
            {
                e=mid-1;
            }
            else s= mid+1;
        }
        return -1;
    }

    int BinarySearch(vector<int>nums, int s, int e, int target)
    {
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(target<nums[mid])
            {
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot = findpivotIndex(nums);
        int result =-1;
        if(pivot == -1) return BinarySearch(nums, 0, n-1, target);

        if(target>=nums[0] && target<=nums[pivot])
        {
            result = BinarySearch(nums, 0, pivot, target);
        }
        else result = BinarySearch(nums,pivot+1, n-1, target);
        return result;
    }
};