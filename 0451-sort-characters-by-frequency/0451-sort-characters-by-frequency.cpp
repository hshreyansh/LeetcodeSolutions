class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char ch : s){
            mpp[ch]++;
        }
        vector<pair<char,int>> freqVec(mpp.begin(), mpp.end());
        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b){
            return a.second > b.second; 
        });
        
        string ans;
        for(auto &p : freqVec){
            ans += string(p.second, p.first);
        }
        
        return ans;
    }
};
