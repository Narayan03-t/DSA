class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>map;

        for(int i=0;i<n;i++){
            int num = nums[i];
            map[num] = map[num]+1;
        }
        vector<int>ans;
        for(auto it : map){
            int key = it.first;
            int freq = it.second;

            if(freq==2){
                ans.push_back(key);

            }
        }
        return ans;

    }
};