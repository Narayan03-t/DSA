class Solution {
public:
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

    int climbStairs(int n) {
        //return solve(n);
        // 1d dp -> Top down approach
        vector<int>dp(n+1,-1);
        int ans = solvebyMemo(n,dp);
        return ans;
    }
};