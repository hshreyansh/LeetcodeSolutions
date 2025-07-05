class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int n = nums.size();
        int e = n;
        int mid;
        mid = (s+e) / 2;
        while (s < e) {
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid;
            } else
                s = mid+1;
            mid = (s+e) / 2;
        }
        return mid;
    }
};