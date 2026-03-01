class Solution {
public:

    void solve(vector<int>& nums,int i,vector<vector<int>>& ans,int n){
        // base case
        if(i>=n){
            ans.push_back(nums);
        }
        // 1 case -> har ek position ke liye sabko equall mauka deba
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            solve(nums,i+1,ans,n);

            // backtrack
            swap(nums[i],nums[j]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>>ans;
        int i=0;
        solve(nums,i,ans,n);
        return ans;
    }
};