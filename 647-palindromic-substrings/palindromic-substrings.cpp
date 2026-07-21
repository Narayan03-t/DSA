class Solution {
public:
    int countpalindromicSubs(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        for(int centre=0;centre<n;centre++){
            // centre ke arount mssn kr substring nikalna hai
            // odd length ki substring
            int i=centre;
            int j=centre;
            int oddplaindsubs = countpalindromicSubs(s,i,j);

            // even length ki substring
            i = centre;
            j = centre+1;
            int evenplaindsubs = countpalindromicSubs(s,i,j);

            ans = ans + oddplaindsubs + evenplaindsubs;
        }
        
        return ans;
    }
};