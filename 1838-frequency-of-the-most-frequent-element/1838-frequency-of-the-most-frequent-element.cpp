class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // prefix sum
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        int ans = 1;

        for (int i = 0; i < n; i++) {
            int l = 0, r = i;

            while (l <= r) {
                int mid = l + (r - l) / 2;

                long long cost =
                    1LL * nums[i] * (i - mid + 1) - (pref[i + 1] - pref[mid]);

                if (cost <= k) {
                    ans = max(ans, i - mid + 1);
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
        }
        return ans;
    }
};
