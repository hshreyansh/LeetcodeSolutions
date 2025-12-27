class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        string curr = num;
        for (int i = 0; i < curr.size() - 1;) {
            if (k > 0 && curr[i] > curr[i + 1]) {
                curr.erase(curr.begin() + i);
                k--;
                if(i > 0) i--;
            } else {
                i++;
            }
        }
        while (k > 0 && !curr.empty()) {
            curr.pop_back();
            k--;
        }
        int i = 0;
        while (i < curr.size() && curr[i] == '0')
            i++;
        curr = curr.substr(i);
        return curr.empty() ? "0" : curr;
    }
};