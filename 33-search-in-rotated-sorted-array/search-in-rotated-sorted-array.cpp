class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == target){
                ans = i;
            }
        }
        return ans;
    }
};