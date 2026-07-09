class Solution {
public:
    int solveUsingRecursion(int n){
        // Recursive
        // base case 
        if(n==0 || n==1){
            return n;
        }

        int ans = fib(n-1) + fib(n-2);
        return ans;
    }

    int solveUsingMemo(int n,vector<int>& dp){
        if(n==0 || n==1){
            return n;
        }
        // step 3 -> base case ke baad if ans already exist or not
        if(dp[n] != -1){
            return dp[n];
        }

        // step 2 -> store and return recursion answer in dp array
        dp[n] = solveUsingMemo(n-1,dp) + solveUsingMemo(n-2,dp);
        return dp[n];
    }
    
    int fib(int n) {
        // int ans = solveUsingRecursion(n);
        // return ans;

        // DP
        // step 1 -> create dp array and pass in function
        vector<int>dp(n+1,-1);

        int ans = solveUsingMemo(n,dp);
        return ans;
    }
};