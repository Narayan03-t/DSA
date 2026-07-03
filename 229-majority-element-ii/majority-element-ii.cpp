class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        vector<int>ans;

        for(int num : nums){
            freq[num]++;
        }

        for(auto it : freq){
            int key = it.first;
            int value = it.second;

            if(value > n/3){
                ans.push_back(key);
            }
        }
        return ans;
    }
};