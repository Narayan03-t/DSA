class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n =arr.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            int num = arr[i];
            map[num] = map[num]+1;
        }
        // int ans = -1;
        vector<int>ans(n,-1);
        for(auto it : map){
            int key = it.first;
            int freq = it.second;

            if(key == freq){
                ans.push_back(key);
            }
        }
        int finalans = *max_element(ans.begin(),ans.end());
        return finalans;
    }
};