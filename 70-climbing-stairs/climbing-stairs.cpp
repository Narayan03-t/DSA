class Solution {
public:
    // by Recursion
    int solve(int n){
        // base case
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        int ans = solve(n-1) + solve(n-2);
        return ans;

    }
    // solve by 1d dp -> memoization
    int solvebyMemo(int n,vector<int>& dp){
        // base case
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        dp[n] = solvebyMemo(n-1,dp) + solvebyMemo(n-2,dp);
        return dp[n];

    }
    // by tabulation
    int solvebyTab(int n){
        if(n==0){
            return 1;
        }
        vector<int>dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
    }
    int climbStairs(int n) {
        //return solve(n);
        // 1d dp -> Top down approach
        // vector<int>dp(n+1,-1);
        // int ans = solvebyMemo(n,dp);
        // return ans;

        // bottom up approach -> Tabulation
        int ans = solvebyTab(n);
        return ans;
    }
};