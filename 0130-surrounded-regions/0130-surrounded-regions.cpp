class Solution {
public:
    void connect(vector<vector<char>>& board, int i, int j, int n, int m) {
        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != 'O') return;

        board[i][j] = 'A'; 

        connect(board, i - 1, j, n, m);
        connect(board, i + 1, j, n, m);
        connect(board, i, j - 1, n, m);
        connect(board, i, j + 1, n, m);
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0) return;
        int m = board[0].size();

        for (int r = 0; r < n; r++) {
            if (board[r][0] == 'O') connect(board, r, 0, n, m);
            if (board[r][m - 1] == 'O') connect(board, r, m - 1, n, m);
        }
        for (int c = 0; c < m; c++) {
            if (board[0][c] == 'O') connect(board, 0, c, n, m);
            if (board[n - 1][c] == 'O') connect(board, n - 1, c, n, m);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                else if (board[i][j] == 'A') board[i][j] = 'O';
            }
        }
    }
};
