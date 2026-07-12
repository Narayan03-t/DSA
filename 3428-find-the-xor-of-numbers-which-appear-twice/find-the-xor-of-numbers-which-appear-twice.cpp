class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>map;
        int n = nums.size();

        for(int i : nums){
             map[i]++;
        }
        vector<int>ans;
        for(auto it : map){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        int ans2 = 0;
        for(int i : ans){
            ans2 = ans2 ^ i;
        }
        return ans2;
    }
};