class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int>mpp;
        int i = 0;
        int res = 0;
        for (int j = 0; j<s.length(); j++) {
            int ch = s[j] - 'a';
            mpp[ch]++;
            while (mpp[ch]> 2) {
                int ch2 = s[i] - 'a';
                mpp[ch2]--;
                i++;
            }
            res = max(res, j-i + 1);
        }
        return res;
    }
};