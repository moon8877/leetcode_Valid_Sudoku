class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    int tempNum = board[i][j]-'0'-1;
                    
                    if((rows[i][tempNum] || cols[j][tempNum] || boxes[(j/3)+(i/3)*3][tempNum]) != 0){
                        return false;
                    }
                    else{
                        rows[i][tempNum] = 1;
                        cols[j][tempNum] = 1;
                        boxes[(j/3)+(i/3)*3][tempNum] = 1;
                    }
                }
            }
        }
        return true;
            
    }
};