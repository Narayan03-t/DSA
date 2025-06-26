class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int i=0;
        int j=len-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
    }
};