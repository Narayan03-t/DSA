class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            else if(nums[mid] < target){
                // right me jaao
                s = mid+1;
            }
            else if(nums[mid]>target){
                //left me jaao
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};