class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b= strs[strs.size()-1];
        int i=0;
        for(; i<a.size(); i++){
            if(a[i]!=b[i]){
                
                break;
            }
        }
        return a.substr(0,i);
    }
};