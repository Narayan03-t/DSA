class Solution {
public:
    int brute(vector<int>&nums){
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum = sum+nums[j];
                ans = max(ans,sum);
            }
            
        }
        return ans;
    } 

    int kadaneAlgo(vector<int>& nums){
        int ans = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            ans = max(ans,sum);

            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }

    int maxSubArray(vector<int>& nums) {
        return kadaneAlgo(nums);   
    }
};