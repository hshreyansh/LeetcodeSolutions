class Solution {
public:
    int numberOfSubstrings(string s) {
        int j=0, ans=0;
        int n=s.size();

        vector<int>lastseen={-1,-1,-1};

        while(j<n){

            lastseen[s[j]-'a'] = j;

            if( lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1 ){

                ans = ans + ( 1+ min({lastseen[0],lastseen[1],lastseen[2]} ));
            }
            j++;
        }
        return ans;
    }
};