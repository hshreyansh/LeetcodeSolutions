class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n= mat.size();
        int onesCount= INT_MIN;
        int rowNo=0;
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
                if(count>onesCount)
                {
                    onesCount=count;
                    rowNo=i;
                }
            }
        }
        return {rowNo, onesCount};
    }
};