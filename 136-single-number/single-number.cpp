class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // // method 1 (XOR)
        // int n=nums.size();
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     ans = ans ^ nums[i];
        // }
        // return ans;

        // method 2
        unordered_map<int,int>map;
        int n = nums.size();
        for(int i : nums){
            map[i]++;
        }
        int ans;
        for(auto it : map){
            if(it.second == 1){
                ans = it.first;
            }
        }
        return ans;

    }
};