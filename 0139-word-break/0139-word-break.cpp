class Solution {
public:
    unordered_set<string> st;
    int n;

    bool solve(int idx, string &s) {
        if (idx == n) return true;

        for (int i = idx; i < n; i++) {
            string temp = s.substr(idx, i - idx + 1);
            if (st.count(temp) && solve(i + 1, s)) {
                return true;
            }
        }
        return false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();
        for (auto &w : wordDict) {
            st.insert(w);
        }
        return solve(0, s);
    }
};
