class Solution {
public:

    bool isSafe(int i,int j,vector<vector<char>>& board,char digit){
        // 3 condition check
        // 1 row wise check
        int n = board.size();
        for(int k=0;k<n;k++){
            if(board[i][k] == digit){
                return false;
            }
        }
        // 2 col wise check
        for(int k=0;k<n;k++){
            if(board[k][j]== digit){
                return false;
            }
        }
        // 3. (3*3) sub block check
        for(int k=0;k<n;k++){
            if(board[3*(i/3)+(k/3)][3*(j/3)+(k%3)] == digit){
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        // base case

        // sabse pehle find karenge empty cell(".") jisme data fill krna hai
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    // matlab iss position pe empty hai aur hme data 1->9 fill krna hai
                    for(char digit='1';digit<='9';digit++){
                        if(isSafe(i,j,board,digit) == true){
                            board[i][j] = digit;
                            bool aagekapart = solve(board);

                            if(aagekapart==true){
                                // matlab pura solve ho gya
                                return true;
                            }
                            else{
                                // backtrack (yani kahi pe galat data fill kr diye to fir se backtack kro)
                                board[i][j] = '.';
                            }
                        }
                        
                    }
                    // yaha tak agar pahuch gye iska matlab koi bhi data 1 se 9 tak fill nhi kr paaya
                    return false;
                }
            }
        }
        // yaha pe aane ka matlab hai ki board pura fill ho gya hai
        return true;

    }


    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};