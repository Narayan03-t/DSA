class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freqmap;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            freqmap[num] = freqmap[num] + 1;
        }
        
        for(auto it:freqmap){
            int key = it.first;
            int freq = it.second;
            //cout<<key<<" "<<freq<<endl;
            if(freq == 1){
                ans.push_back(key);
                cout<<key<<" ";
            }
        }
        return ans;
    }
};