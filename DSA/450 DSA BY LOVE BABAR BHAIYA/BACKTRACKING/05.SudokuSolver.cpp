bool isSafe(int grid[N][N],int i,int j,int number){
        //col check
        for(int k=0;k<N;k++){
            if(grid[i][k]==number and k!=j){
                return false;
            }
        }
        
        //row check
        for(int k=0;k<N;k++){
            if(grid[k][j]==number and k!=i){
                return false;
            }
        }
        
        
        //checking 3*3 square 
        //top left most coordinates
        int top_left_i=3*(i/3);
        int top_left_j=3*(j/3);
        
        for(int p=0;p<3;p++){
            for(int q=0;q<3;q++){
                if(top_left_i+p==i and top_left_j+q==j){
                    continue;
                }
                if(grid[top_left_i+p][top_left_j+q]==number){
                    return false;
                }    
            }
        }
        
        return true;
    }
    bool helper(int grid[N][N],int i,int j){
        if(i==N){
           //printGrid(grid);
            return true;
        }
        int newi=0,newj=0;
        if(j==N-1){
            newi=i+1;
            newj=0;
        }
        else{
            newi=i;
            newj=j+1;
        }
        if(grid[i][j]!=0){
            return helper(grid,newi,newj);
        }
        else{
            for(int possible=1;possible<=9;possible++){
             if(isSafe(grid,i,j,possible)){
             grid[i][j]=possible;
             if(helper(grid,newi,newj)){
                 return true;
             }
             else{
                 grid[i][j]=0;
                }
              }
            }
            return false;
        }
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        return helper(grid,0,0);
        
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               cout<<grid[i][j]<<" ";
           }
           //cout<<endl;
       }
    }