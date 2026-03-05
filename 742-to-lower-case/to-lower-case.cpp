class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();
        string ans = "";
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch >= 'A' && ch <= 'Z'){
                ch = ch-'A'+'a';
                
            }
            ans.push_back(ch);
        }
       
        return ans;

    }
};