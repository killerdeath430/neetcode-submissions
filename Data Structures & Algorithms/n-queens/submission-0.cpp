class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        teller(0,ans,board);
        return ans;
    }
    void teller ( int i , vector<vector<string>>&ans, vector<string>&board){
        if(i==board.size()){
            ans.push_back(board);
            return;
        }
        for (int j=0;j<board.size();j++){
            if(isSafe(i,j,board)){
                board[i][j]='Q';
                teller(i+1,ans,board);
                board[i][j]='.';
            }
        }
    }
    bool isSafe(int r ,int c , vector<string>&board ){
       for (int i = r - 1; i >= 0; i--) {
            if (board[i][c] == 'Q') return false;
        }
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        for (int i = r - 1, j = c + 1; i >= 0 && j < board.size(); i--, j++) {
            if (board[i][j] == 'Q') return false;
        }
        return true;

    }
};
