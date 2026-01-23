class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        for(auto &i: mat){
            int n = i.size();
            for(int j=0; j<n; j++){
                if(i[j] != i[(j+k)%n]){
                    return false;
                }                    
            }
        }
        return true;
    }
};
