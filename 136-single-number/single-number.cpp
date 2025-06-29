class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // method 1 (XOR)
        // int n = nums.size();
        // int ans = 0;

        // for(int i=0;i<n;i++){
        //     ans = nums[i] ^ ans;
        // }
        // return ans;


        // method 3 (hashmap)
        
        // unordered_map<int,int>freqmap;
        // for(int i=0;i<nums.size();i++){
        //     int num = nums[i];
        //     freqmap[num] = freqmap[num] + 1;
        // }
        // int ans;
        // for(auto it : freqmap){
        //     int key = it.first;
        //     int freq = it.second;

        //     if(freq == 1){
        //     ans = key;
        //     break;
        // }
        // }
        
        // return ans;

        int n = nums.size();
        sort(nums.begin(),nums.end());

        int ans;
        for(int i=0;i<n;i=i+2){
            if(i+1<n && nums[i] == nums[i+1]){
               
            }
            else{
                ans = nums[i];
                break;
            }
        }
        return ans;

    }
};