class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid;
        int ans=n;
        while(s<=e){

            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
            ans=mid;
            e=mid-1;
            }            
        }
        return ans;
    }
};