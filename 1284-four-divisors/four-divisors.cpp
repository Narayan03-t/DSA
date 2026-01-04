class Solution {
public:
    int findDivisor(int num){
        int divisor=0;
        int sum=0;

        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                int fact=i;
                int other = num/i;
                if(other==fact){  // perfect square wla case
                    divisor++;
                    sum = sum+fact;
                }
                else{
                    divisor = divisor+2;
                    sum = sum + fact+other;
                }
                
            }
        }
        if(divisor != 4){
            return 0;
        }
        else{
            return sum;
        }
    }

    int sumFourDivisors(vector<int>& nums) {
        int result=0;
        for(int &num : nums){
            result = result + findDivisor(num);
        }

        return result;
    }
};