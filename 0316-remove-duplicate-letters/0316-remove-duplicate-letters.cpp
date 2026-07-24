class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
        int n = s.length();
        vector<bool>taken(26, false);
        vector<int>lastseen(26);

        for(int i=0; i<n; i++){
            char ch = s[i];
            lastseen[ch-'a'] = i;
        }
        for(int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            
            if(taken[idx] == true) continue;
            
            while(ans.length() > 0 && s[i] < ans.back() && lastseen[ans.back() - 'a'] > i) {
                taken[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            
            ans.push_back(s[i]);
            taken[idx] = true;
            
        }
        return ans;
    }
};