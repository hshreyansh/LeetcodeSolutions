class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n/2;
        for(int i=0; i<mid; i++){
            if(nums[i] == nums[mid]) return false;
        }
        for(int i=mid+1; i<n; i++){
            if(nums[i] == nums[mid]) return false;
        }
        return true;
    }
};