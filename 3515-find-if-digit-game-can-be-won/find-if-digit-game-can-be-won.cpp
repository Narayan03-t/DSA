class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();

        int singledigit = 0;
        int doubledigit = 0;

        for(int i=0;i<n;i++){
            if(nums[i]<10){
                singledigit = singledigit + nums[i];
            }
            else{
                doubledigit = doubledigit+ nums[i];
            }
        }

        if(singledigit > doubledigit){
            return true;
        }
        else if(doubledigit > singledigit){
            return true;
        }
        return false;
    }
};