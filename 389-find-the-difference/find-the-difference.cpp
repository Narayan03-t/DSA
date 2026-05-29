class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            sum1 = sum1+int(ch);
        }
        int sum2=0;
        for(int i=0;i<t.length();i++){
            char chh=t[i];
            sum2=sum2+char(chh);
        }
        int ans = sum2-sum1;

        return char(ans);
    }
};