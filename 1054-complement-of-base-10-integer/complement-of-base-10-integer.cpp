class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int digit = n;
        int c = 0;
        int result=0;
        while(digit){
            int r = digit%2;
            result = result + (pow(2,c)*!r);
            digit=digit/2;
            c++;
        }



        return result;

    }
};