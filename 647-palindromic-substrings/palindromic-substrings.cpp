class Solution {
public:

    int expandaroundcenter(string s,int i,int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {

        int totalcount = 0;

        for(int center=0;center<s.length();center++){
            // count odd size substring
            int i=center;
            int j=center;
            int oddsizepalindromesubs = expandaroundcenter(s,i,j);

            // count even size substring
            i=center;
            j=center+1;
            int evensizepalindromesubs = expandaroundcenter(s,i,j);

            totalcount = totalcount + oddsizepalindromesubs + evensizepalindromesubs;
        }

        return totalcount;
    }
};