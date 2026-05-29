class Solution {
public:
    char findTheDifference(string s, string t) {
        // Approach 1 (sum approach)
        // int sum1=0;
        // for(int i=0;i<s.length();i++){
        //     char ch = s[i];
        //     sum1 = sum1+int(ch);
        // }
        // int sum2=0;
        // for(int i=0;i<t.length();i++){
        //     char chh=t[i];
        //     sum2=sum2+char(chh);
        // }
        // int ans = sum2-sum1;

        // return char(ans);

        // Approach 2 (XOR)
        int ans=0;
        for(char &ch : s){
            ans= ans^ch;
        }
        for(char &ch :t){
            ans=ans^ch;
        }
        return ans;







        // Approach 3 (hashmap)
    }
};