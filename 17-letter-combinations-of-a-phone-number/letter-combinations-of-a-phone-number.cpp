class Solution {
public:

    void solve(vector<string>& ans,unordered_map<char,string>& mapping,int i,string &output,string &digits){
        // base case
        if(i>= digits.length()){
            ans.push_back(output);
            return;
        }

        char digit = digits[i];
        string mappedstring = mapping[digit];

        for(char ch : mappedstring){
            output.push_back(ch);
            solve(ans,mapping,i+1,output,digits);

            // backtrack
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;

        unordered_map<char,string> mapping;
        mapping['2'] = "abc";
        mapping['3'] = "def";
        mapping['4'] = "ghi";
        mapping['5'] = "jkl";
        mapping['6'] = "mno";
        mapping['7'] = "pqrs";
        mapping['8'] = "tuv";
        mapping['9'] = "wxyz";

        int i=0;
        string output = "";
        solve(ans,mapping,i,output,digits);
        return ans;
    }
};