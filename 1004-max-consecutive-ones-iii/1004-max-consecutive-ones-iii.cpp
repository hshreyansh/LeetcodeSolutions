class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, zeros = 0, maxlength = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] == 0) {
                zeros++;
            }
            while (zeros > k) {
                if (nums[i] == 0) {
                    zeros--;
                }
                i++;
            }
            maxlength = max(maxlength, j - i + 1);
        }

        return maxlength;
    }
};
