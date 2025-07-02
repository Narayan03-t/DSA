class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // method 1
        // unordered_map<int,int>map;
        // for(int i=0;i<nums.size();i++){
        //     int num = nums[i];
        //     map[num] = map[num]+1;
        // }

        // int ans;
        // for(auto it : map){
        //     int key = it.first;
        //     int freq = it.second;

        //     if(freq>=2){
        //         ans = key;
        //     }
        // }
        // return ans;

        // method 2
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
            return nums[i];
        }
        return -1;
    }
};