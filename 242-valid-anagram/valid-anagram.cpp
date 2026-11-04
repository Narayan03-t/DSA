class Solution {
public:
    bool isAnagram(string s, string t) {
        // Method 1: sorting and than compare
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        else{
            return false;
        }
    }
};