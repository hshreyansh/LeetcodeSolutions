class Solution {
public:
int m,n;
vector<vector<int>> directions{{0,1}, {0,-1}, {1,0}, {-1,0}};
//not from 1->0 results in O(n^2)
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        //do bfs from 0->1
        m= mat.size();
        n= mat[0].size();
        queue<pair<int, int>> que;
        vector<vector<int>> result(m, vector<int>(n,-1)); //mark all idx to -1 first
        for(int i=0; i<m; i++){
            for(int j=0; j<n ; j++){
                if(mat[i][j]==0){
                    result[i][j]=0;
                    que.push({i,j});
                }
            }
        }
        //push all the zeroes idx into queue
        while(!que.empty()){
            pair<int, int> p = que.front();
            que.pop();
            int i= p.first;
            int j= p.second;
            for(auto &dir: directions){
                int new_i = i+dir[0];
                int new_j = j+dir[1];

                if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && result[new_i][new_j]==-1){
                    result[new_i][new_j] = result[i][j]+1;
                    que.push({new_i, new_j});
                }
            }

        }
        return result;
    }
};