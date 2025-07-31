class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            map<char, int> mpp;

            for (int j = i; j < s.size(); j++) {
                mpp[s[j]]++;

                int most = 0, low = INT_MAX;
                for (auto a : mpp) {
                    most = max(most, a.second);
                    low = min(low, a.second);
                }

                ans += most - low;
            }
        }
        return ans;
    }
};
