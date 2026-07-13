class Solution {
public:
    int solvebyRec(vector<int>& nums,int n, int i){
        // base case
        if(i>=n){
            return 0;
        }

        int include = nums[i] + solvebyRec(nums,n,i+2);
        int exclude = 0 + solvebyRec(nums,n,i+1);
        int finalans = max(include,exclude);
        return finalans;
    }

    int solveusingMemo(vector<int>& nums, vector<int>& dp,int n,int i){
        // base case
        if(i>=n){
            return 0;
        }

        if(dp[i] != -1){
            return dp[i];
        }

        int include = nums[i] + solveusingMemo(nums,dp,n,i+2);
        int exclude = 0 + solveusingMemo(nums,dp,n,i+1);
        dp[i] = max(include,exclude);
        return dp[i];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        // int ans = solvebyRec(nums,n,i);
        // return ans;

        // step 1: create dp array and than pass in function
        vector<int>dp(n+1,-1);
        int ans = solveusingMemo(nums,dp,n,i);
        return ans;
    }
};