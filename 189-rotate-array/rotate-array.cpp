class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // 1 reverse all
        reverse(nums.begin(),nums.end());

        // 2 reverse first k
        reverse(nums.begin(),nums.begin()+k);

        // 3 reverse n-k to n
        reverse(nums.begin()+k,nums.end());





        // int n = nums.size();
        // int shift = k%n;

        // int temp[100000];
        // int index = 0;
        // for(int i=n-shift;i<n;i++){
        //     temp[index] = nums[i];
        //     index++;
        // } 

        // for(int i=n-1;i>=shift;i--){
        //     nums[i] = nums[i-shift];
        // }

        // for(int i=0;i<shift;i++){
        //     nums[i] = temp[i];

        // }
    }
};