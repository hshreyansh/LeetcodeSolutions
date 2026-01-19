class Solution {
public:
    void solve(int idx, string &digits, string &ans, vector<string>&result, unordered_map<char, string>& mpp){
        if(idx >= digits.size()){
            result.push_back(ans);
            return;
        }
        char ch = digits[idx];
        string s = mpp[ch]; 
        for(int i=0; i< s.size(); i++){
            ans.push_back(s[i]);
            solve(idx+1, digits, ans, result, mpp);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0) return {};
        unordered_map<char, string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";

        string ans= "";
        vector<string>result;
        solve(0, digits, ans, result, mpp);
        return result;
    }
};