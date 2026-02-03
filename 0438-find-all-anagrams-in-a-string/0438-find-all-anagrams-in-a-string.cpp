class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n= s.size();
        vector<int>ans;
        unordered_map<char,int>pfreq, mpp;
        for(auto &x: p){
            pfreq[x]++;
        }
        int i=0;
        for(int j=0; j<n; j++){
            mpp[s[j]]++;

            if(j-i+1==p.size()){
                if(mpp==pfreq){
                    ans.push_back(i);
                }
                mpp[s[i]]--;
                if(mpp[s[i]]==0) mpp.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};