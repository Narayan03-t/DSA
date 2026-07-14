class Solution {
public:
    int solve(int n){
        if(n==0){
            return 0;
        }
        if(n== 1 || n==2){
            return 1;
        }
        int ans = solve(n-1) + solve(n-2) + solve(n-3);
        return ans;
    }
    int solveByMemo(int n, vector<int>& dp){
        if(n==0){
            return 0;
        }
        if(n== 1 || n==2){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        dp[n] = solveByMemo(n-1,dp) + solveByMemo(n-2,dp) + solveByMemo(n-3,dp);
        return dp[n];
    }
    int solveByTab(int n){
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        vector<int>dp(n+1,0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
    int tribonacci(int n) {
        //return solve(n);
        // Top down approach Memoization( 1D dp)
        // vector<int>dp(n+1,-1);
        // int ans = solveByMemo(n,dp);
        // return ans;

        return solveByTab(n);
    }
};