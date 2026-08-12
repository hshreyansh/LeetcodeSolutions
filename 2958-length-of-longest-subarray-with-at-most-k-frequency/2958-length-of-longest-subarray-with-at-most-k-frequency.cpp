class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int n= nums.size();
        int len=0;
        int i=0, j=0;
        while(j<n){
            freq[nums[j]]++;
            while(i<j && freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            len = max(len, j-i+1);
            j++;
        }
        return len;
    }
};