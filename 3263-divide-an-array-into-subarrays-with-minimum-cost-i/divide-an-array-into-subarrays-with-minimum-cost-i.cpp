class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();

        int score = nums[0];
        int firstmin = INT_MAX;
        int secondmin = INT_MAX;

        for(int i=1;i<n;i++){
            if(nums[i]<firstmin){
                secondmin = firstmin;
                firstmin = nums[i];
            }
            else if(nums[i]<secondmin){
                secondmin = nums[i];
            }

        }
        int ans = score + firstmin + secondmin;
        return ans;
    }
};