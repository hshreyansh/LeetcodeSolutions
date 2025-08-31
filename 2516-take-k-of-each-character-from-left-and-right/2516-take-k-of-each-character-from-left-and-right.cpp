class Solution {
public:
    int takeCharacters(string s, int k) {
        int n=s.size();
        int l=0, r=0;
        int count=n;

        vector<int>check(3,0);
        for(char c:s){
            check[c-'a']++;
        }
        if (check[0] < k || check[1] < k || check[2] < k) {
            return -1;
        }
        while(r<n){
            check[s[r]-'a']--;
            while(check[0] < k || check[1] < k || check[2] < k){
                check[s[l]-'a']++;
                l++;
            }
            
            count= min(count, n-(r-l+1));
            r++;
        }
        return count;
    }
};