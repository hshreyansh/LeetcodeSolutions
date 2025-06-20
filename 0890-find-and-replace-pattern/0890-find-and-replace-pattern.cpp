class Solution {
public:
void createMap(string &str)
{
    char start='a';
    char mapp[300]={0};
    for(auto ch:str)
    {
        if(mapp[ch]==0){
            mapp[ch]=start;
            start++;
        }
    }
    for(int i=0; i<str.length(); i++)
    {
        char ch= str[i];
        str[i]=mapp[ch];
    }
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        createMap(pattern);
        for(string s:words){
            string temp=s;
            createMap(temp);
            if(temp==pattern)
            {
                ans.push_back(s);
            }
        }
    return ans;
    }
};