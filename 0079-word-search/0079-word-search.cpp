class Solution {
public:
    int n,m;
    bool dfs(vector<vector<char>>& board, string &word, int i, int j, int idx){
        if(i<0 || j<0|| i>=n || j>=m || board[i][j] !=word[idx])  return false;
        if(idx == word.length()-1) return true;

        char ch = board[i][j];
        board[i][j] = '#';

        if( dfs(board, word, i+1, j, idx+1) ||
        dfs(board, word, i-1, j, idx+1) ||
        dfs(board, word, i, j+1, idx+1) ||
        dfs(board, word, i, j-1, idx+1) ){
            return true;
        }
        board[i][j] = ch;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m= board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
        
    }
};