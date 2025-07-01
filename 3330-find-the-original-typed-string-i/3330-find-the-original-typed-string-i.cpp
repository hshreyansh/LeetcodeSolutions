class Solution {
public:
    int add(string &word, int i, int n)
    {
        int ans;
        if (i >= n - 1) return 1;
        if(word[i]==word[i+1])
        ans = 1 + add(word,i+1,n);
        else ans=add(word,i+1,n);
        return ans;
    }
    int possibleStringCount(string word) {
        int n= word.size();
        return add(word,0,n);
    }
};