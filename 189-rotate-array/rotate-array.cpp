class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int shift=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+shift);
        reverse(nums.begin()+shift,nums.end());
    }
};