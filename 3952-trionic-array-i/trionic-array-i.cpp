class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i+1< n  && nums[i]< nums[i+1]){
            i++;
            
        }
        if(i==n-1 || i==0){
            return false;
        }
        int temp = i;
        while(i+1<n && nums[i]>nums[i+1]){
            i++;
        }
        if(i==n-1 || temp==i){
            return false;
        }
        while(i+1<n && nums[i]<nums[i+1]){
            i++;   
        }
        if(i==n-1){
            return true;
        }
        return false;

    }
};