class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string ans;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if((ch >= 'A' && ch <= 'Z') || (ch >='a' && ch <= 'z') || (ch >= '0' && ch <='9')){
                ans.push_back(ch);
            }
        }

        for(int i=0;i<ans.length();i++){
            char &ch = ans[i];
            if(ch >= 'A' && ch <= 'Z'){
                ch = ch - 'A' + 'a';
            }
        }

        int i=0;
        int j=ans.length()-1;
        while(i<=j){
            if(ans[i] != ans[j]){
                return false;
            }
            else{
                i++;
                j--;
            }

        }
        return true;
    }
};