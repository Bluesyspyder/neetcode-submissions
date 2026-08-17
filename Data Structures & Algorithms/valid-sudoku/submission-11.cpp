class Solution {
public:
    bool safe(vector<vector<char>> board,int row,int col){
        char val = board[row][col];
        if(val == '.'){return true;}

        for(int i=0;i<9;i++){
            if(i == col){continue;}
            if(board[row][i] == val){return false;}
        }
        for(int i=0;i<9;i++){
            if(i == row){continue;}
            if(board[i][col] == val){return false;}
        }

        int startrow = (row/3)*3;
        int startcol = (col/3)*3;

        for(int i=startrow;i<startrow+3;i++){
            for(int j=startcol;j<startcol+3;j++){
                if(i == row && j == col){continue;}
                if(board[i][j] == val){return false;}
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(!safe(board,i,j)){return false;}
            }
        }
        return true;
    }
};
