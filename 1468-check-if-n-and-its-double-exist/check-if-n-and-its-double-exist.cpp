class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> map;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int num = arr[i];
            map[num] = map[num]+1;
        }

        for(auto it : map){
            int x = it.first;
            
            if(x == 0 && it.second >= 2){
                return true;
            }

            
            if(x != 0 && map.find(2 * x) != map.end()){
                return true;
            }
        }
        return false;
    }
};