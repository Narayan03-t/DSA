class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();
        ans.push_back(s[0]);
        
        for(int i=1;i<n;i++){
            char current = s[i];
            if(ans.empty()){
                ans.push_back(current);
            }
            else if(current != ans.back()){
                ans.push_back(current);
            }
            else if(current == ans.back()){
                ans.pop_back();
            }

        }
        return ans;
    }
};