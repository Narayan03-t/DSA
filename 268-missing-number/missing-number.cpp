class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // // XOR Approach
        // int n = nums.size();
        // int ans = n;
        // for(int i=0;i<n;i++){
        //     ans = ans ^ i ^ nums[i];
        // }
        // return ans;

        // method 2 
        int n = nums.size();
        int total_sum = n*(n+1)/2;
        int given_sum = 0;
        for(int i=0;i<n;i++){
            given_sum = given_sum + nums[i];
        }
        int ans = total_sum - given_sum;
        return ans;
    }
};