class Solution {
public:
    int n;
    int m;
    int maxArea=0;
    int currArea=0;
    void dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i>=n || j<0  || j>=m || grid[i][j]!=1){
            return;
        }
        grid[i][j]= -1;
        currArea++;

        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n= grid.size();
        m=grid[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    currArea=0;
                    dfs(grid, i, j);
                    maxArea = max(currArea, maxArea);
                }
            }
        }
        return maxArea;
    }
};