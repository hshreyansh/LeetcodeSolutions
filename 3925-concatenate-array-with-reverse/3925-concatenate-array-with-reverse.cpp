class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        
        nums.insert(nums.end(),nums.rbegin(), nums.rend());
        return nums;
    }
};