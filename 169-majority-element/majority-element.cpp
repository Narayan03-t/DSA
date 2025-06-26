class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        // try again
        // int count = 0;
        // int ans = -1;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0]){
        //         ans = nums[i];
        //     }
        // }
        // int ans;
        // if(count>n/2){
        //     count = ans;
        // }

        // sort(nums.begin(),nums.end());
        
        // int ans = nums[n/2];


        
        int count = 0;
        int ans = -1;

        for(int i=0;i<n;i++){
            if(count == 0){
                ans = nums[i];
                count = 1;
            
            }
            else if(nums[i] == ans){
            count++;
            }
            else{
            count--;
            }
            
        }
        
        
         
        return ans;
    }
};