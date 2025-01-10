class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        // two pointer approach

        int i=1;
        int j=0;

        while(i<n){
            if(nums[i] == nums[j]){
                i++;
            }
            else{
                j++;
                nums[j] = nums[i];
                i++;
            }
        }
        return j+0+1;
    }
};