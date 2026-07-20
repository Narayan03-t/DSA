class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string ans = "";
        for(int i = 0;i<n;i++){
            char curchar = s[i];
            if(ans.empty()){
                ans.push_back(curchar);
            }
            else if(ans.back() == curchar){
                ans.pop_back();
            }
            else{
                ans.push_back(curchar);
            }
        }
        return ans;
    }
};