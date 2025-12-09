class Solution {
public:
    int n;
    int m;
    vector<vector<int>> dir{{1,0},{-1,0},{0,1},{0,-1}};

    void dfs(vector<vector<int>>& grid, int i, int j, int m, int n){
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1) return;
        grid[i][j]=0;
        for(auto &d: dir){
            dfs(grid, i+d[0], j+d[1], m ,n);
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        m= grid.size();
        n= grid[0].size();
        int count=0;           
        for(int i=0; i<m; i++){
            if(grid[i][0]==1){
                dfs(grid, i, 0, m, n);
            }
            if(grid[i][n-1]==1){
                dfs(grid, i, n-1, m, n);
            }
        }
        for(int j=0; j<n; j++){
            if(grid[0][j]==1){
                dfs(grid, 0, j, m, n);
            }
            if(grid[m-1][j]==1){
                dfs(grid, m-1, j, m, n);
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;        
    }
};