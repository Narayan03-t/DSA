class Solution {
public:
    int bruteForce(vector<int>& nums){
        int n = nums.size();
        for(int i=0;i<n;i++){
            int rsum = 0;
            int lsum = 0;
            // left sum
            for(int j=0;j<i;j++){
                lsum = lsum + nums[j];
            }
            // right sum
            for(int j=i+1;j<n;j++){
                rsum = rsum + nums[j];
            }
            if(rsum == lsum){
                return i;
            }
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        int ans = bruteForce(nums);
        return ans;
    }
};