class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> mpp1, mpp2;
        int res= INT_MAX;
        for(char c: s) mpp1[c]++;
        for(char c: target) mpp2[c]++;

        for (auto &it : mpp2) {
            res = min(res, mpp1[it.first]/ it.second);
        }
        return res;        
    }
};