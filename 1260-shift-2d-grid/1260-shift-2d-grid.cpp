class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>ans;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans.push_back(grid[i][j]);
            }
        }
        k %= (m * n);
        reverse(ans.begin(), ans.end());
        reverse(ans.begin(), ans.begin()+k);
        reverse(ans.begin()+k, ans.end());
        int a=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                grid[i][j] = ans[a++];
            }
        }
        return grid;
    }
};