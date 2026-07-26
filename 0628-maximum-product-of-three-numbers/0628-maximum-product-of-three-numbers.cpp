class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int lastprod = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int firstprod = nums[0] * nums[1] * nums[n - 1];

        return max(lastprod, firstprod);
        
    }
};