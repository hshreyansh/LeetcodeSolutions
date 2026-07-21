class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        vector<int>zeroes;
        int cnt =  count(s.begin(), s.end(), '1');
        int ones=0;
        int zeroCnt=0;
        for (char c : s) {
            if (c == '0') {
                zeroCnt++;
            } else {
                if (zeroCnt > 0) {
                    zeroes.push_back(zeroCnt);
                    zeroCnt = 0;
                }
            }
        }
        if (zeroCnt > 0){
            zeroes.push_back(zeroCnt);
        }
        if (zeroes.size() < 2) return cnt;
        int ans = 0;
        for (int i = 0; i + 1 < zeroes.size(); i++) {
            ans = max(ans, zeroes[i] + zeroes[i + 1]);
        }

        return cnt+ ans;
    }
};