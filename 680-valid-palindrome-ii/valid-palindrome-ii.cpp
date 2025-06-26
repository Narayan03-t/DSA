class Solution {
public:

    bool checkpalindrome(string str,int s,int e){

        while(s<=e){
            if(str[s] != str[e]){
                return false;
            }
            else{
                s++;
                e--;
            }

        }
        
        return true;
    }

    bool validPalindrome(string s) {
        int len = s.length();
        int i = 0;
        int j = len-1;

        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                // delete i
                bool ansone = checkpalindrome(s,i+1,j);

                // delete j
                bool anstwo = checkpalindrome(s,i,j-1);
                
                bool finalans = ansone || anstwo;
                return finalans;
            }
        }
        return true;
    }
};