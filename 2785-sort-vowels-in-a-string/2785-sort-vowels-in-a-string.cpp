class Solution {
public:
    bool isVowel(char &ch){
            if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
            ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                return true;
            }
        return false;
    }
    string sortVowels(string s) {
        vector<int> ans;

        for( auto ch:s){
            if(isVowel(ch)){
                ans.push_back(ch);
            }
        }
        sort(ans.begin(), ans.end());

        int j=0;
        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])){
                s[i]=ans[j];
                j++;
            }
        }
    return s;
    }
};