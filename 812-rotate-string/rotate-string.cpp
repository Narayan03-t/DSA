class Solution {
public:
    bool rotateString(string s, string goal) {
        // Bruteforce
        // int n=s.size();
        // int m=goal.size();

        // if(n != m) return false;

        // for(int i=0;i<n;i++){
        //     rotate(s.begin(),s.begin()+1,s.end());
        //     if(s==goal){
        //         return true;
        //     }
        // }
        // return false;

        // optimized
        int n=s.size();
        int m=goal.size();
        if(n!=m) return false;

        string con = s+s;
        if(con.find(goal) != string::npos){
            return true;
        }
        return false;

    }
};