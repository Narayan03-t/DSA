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

    int solveUsingTabulation(int n){
        // step 1 -> create 1d/2d/3d DP array
        vector<int>dp(n+1,-1);

        // step 2 -> Analyze base case in recursive soln and update dp array accordingly
        dp[0] = 0;
        if(n==0){
            return 0;
        }
        dp[1] = 1;

        // step 3: -> check parameter and reverse it and run loop then copy paste logic in dp array and than return dp array with parameter(which is changing)
        // recursion -> n->0
        // reverse -> 0->n
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
    
    int fib(int n) {
        // int ans = solveUsingRecursion(n);
        // return ans;

        // DP   TOP DOWN APPROACH (recursive)
        // step 1 -> create dp array and pass in function
        // vector<int>dp(n+1,-1);

        // int ans = solveUsingMemo(n,dp);
        // return ans;

        int ans = solveUsingTabulation(n);
        return ans;
    }
};