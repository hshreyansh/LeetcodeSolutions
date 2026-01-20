class Solution {
public:
    bool isPalindrome(string &s, int i, int idx){
        while(i<idx){
            if(s[i]!=s[idx]){
                return false;
            }
            i++;
            idx--;
        }
        return true;
    }

    void solve(string &s, int idx, vector<string>&temp, vector<vector<string>> &ans){
        if(idx==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=idx; i<s.size(); i++){
            if(isPalindrome(s, idx, i)){
                temp.push_back(s.substr(idx, i-idx+1));
                solve(s, i+1, temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        solve(s, 0, temp,ans);
        return ans;
    }
};