class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        for(int i=0; i<trust.size(); i++){
            mpp1[trust[i][0]]++;
            mpp2[trust[i][1]]++;
        }
        for(int i = 1; i <= n; i++){
            if(mpp1[i] == 0 && mpp2[i] == n-1)
            return i;
        }

        return -1;
        
        

    }
};