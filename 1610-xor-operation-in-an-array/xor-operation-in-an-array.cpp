class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v;
        for(int i=0;i<n;i++){
            int num = start + 2 * i;
            v.push_back(num);
        }
        int ans = 0;
        // for(int x : v){
        //     ans = ans ^ x;
        // }
        for(int i=0;i<v.size();i++){
            int num = v[i];
            ans = ans ^ num;
        }
        return ans;
    }
};