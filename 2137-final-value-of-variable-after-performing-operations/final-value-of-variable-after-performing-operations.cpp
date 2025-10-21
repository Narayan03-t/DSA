class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int n=operations.size();

        for(int i=0;i<n;i++){
            string ch = operations[i];
            if(ch=="++X" || ch=="++x" || ch=="X++" || ch=="x++"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};