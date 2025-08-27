class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0, n=fruits.size();
        int maxlen=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[fruits[r]]++;
            if(mpp.size()<=2){
                maxlen=max(maxlen, r-l+1);
            }
            else
            {
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                    l++;
                }
            }
            r++;
        }
        return maxlen;
    }
};