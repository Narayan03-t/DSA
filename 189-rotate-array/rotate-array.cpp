class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int shift = k%n;

        int temp[100000];
        int index = 0;
        for(int i=n-shift;i<n;i++){
            temp[index] = nums[i];
            index++;
        } 

        for(int i=n-1;i>=shift;i--){
            nums[i] = nums[i-shift];
        }

        for(int i=0;i<shift;i++){
            nums[i] = temp[i];

        }
    }
};