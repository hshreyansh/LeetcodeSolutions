class Solution {
public:
bool solve(string s, string t, int i, int j)
{
    if(i>=s.size()) return true ;
    if(j>=t.size()) return false;

        //include
        if(s[i]==t[j]) 
        return solve(s,t,i+1,j+1);
        //exclude
        else return solve(s,t,i,j+1);
}
    bool isSubsequence(string s, string t) {
        return solve(s,t,0,0);
    }
};