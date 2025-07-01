class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>freqmap;
        for(int i=0;i<n;i++){
            int num = nums[i];
            freqmap[num] = freqmap[num] +1;
        }
        
        
        for(auto it : freqmap){
            int key = it.first;
            int freq = it.second;

            if(freq >= 2){
                return true;
            }
            
           
        }
        return false;
    }
};