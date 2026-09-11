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

    int prefixSum(vector<int>& nums){
        int n = nums.size();
        vector<int>lsum(n,0);
        vector<int>rsum(n,0);

        // calculate leftsum
        for(int i=1;i<n;i++){
            lsum[i] = lsum[i-1] + nums[i-1];
        }
        // calculate right sum
        for(int i=n-2;i>=0;i--){
            rsum[i] = rsum[i+1] + nums[i+1];
        }
        // now compare from left side
        for(int i=0;i<n;i++){
            if(lsum[i] == rsum[i]){
                return i;
            }
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        // int ans = bruteForce(nums);
        // return ans;

        int ans = prefixSum(nums);
        return ans;
    }
};