//Sudoku Solver	

class Solution {
public:
    bool isSafe(vector<vector<char>> grid, int row,int col, char num) //we check if block is safe or not
    {
    for (int x = 0; x <= 8; x++){  //if no same value is present in the same row
        if (grid[row][x] == num)
            return false;
    }
    for (int x = 0; x <= 8; x++){  //if no same value is present in the same column
        if (grid[x][col] == num)
            return false;
    }
    int startRow = row - row % 3,startCol = col - col % 3;
   
    for (int i = 0; i < 3; i++){  //if no same value is present in the same 3*3 box
        for (int j = 0; j < 3; j++){
            if (grid[i+startRow][j+startCol] == num)
                return false;
        }
    }
 
    return true;
}
    bool recur(int i,int j,vector<vector<char>>& board){
        if(j==9){  //if j excedes the boundry means we need to move to new row
          i++;  j=0;
        }
        if(i==9)
            return true;
        if(board[i][j]=='.'){  //we enter here if block is empty
            for(int k=1;k<=9;k++){  //check for all values from [1,9], to see which suites better
                if(isSafe(board,i,j,k+'0')){
                    board[i][j]=char(k+'0');
                    if(recur(i,j+1,board))  //if ones true,return same for all previous recursion calls
                        return true;
                    board[i][j]='.';
                }
            }
        }
        else{  //if block is already filled we just move to other bolck
                if(recur(i,j+1,board))
                    return true;
        }
        return false;  //if no value suites the position we return false
    }
    void solveSudoku(vector<vector<char>>& board) {
        recur(0,0,board);
    }
};