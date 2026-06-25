class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int h1 = 0, h2 = 0;
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == h1) {
                cnt1++;
            }
            else if (nums[i] == h2) {
                cnt2++;
            }
            else if (cnt1 == 0) {
                h1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0) {
                h2 = nums[i];
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = cnt2 = 0;

        for (int num : nums) {
            if (num == h1)
                cnt1++;
            else if (num == h2)
                cnt2++;
        }

        vector<int> ans;

        if (cnt1 > nums.size() / 3)
            ans.push_back(h1);

        if (cnt2 > nums.size() / 3)
            ans.push_back(h2);

        return ans;
    }
};