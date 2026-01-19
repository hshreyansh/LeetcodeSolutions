class Solution {
public:
    void solve(int idx, int open, int close, int n, string &temp, vector<string> &ans){
        if(idx==n*2){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            temp.push_back('(');
            solve(idx+1, open+1, close,n, temp, ans);
            temp.pop_back();
        }
        if(close<open){
            temp.push_back(')');
            solve(idx+1, open, close+1,n, temp, ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string> ans;
        solve(0,0,0, n, temp, ans);
        return ans;
    }
};