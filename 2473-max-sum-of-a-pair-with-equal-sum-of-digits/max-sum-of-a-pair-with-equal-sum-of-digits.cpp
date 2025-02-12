class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> sumMap;
        
        for (int num : nums) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            sumMap[sum].push_back(num);
        }
        
        int maxSum = -1;
        
        for (auto& pair : sumMap) {
            if (pair.second.size() >= 2) {
                sort(pair.second.rbegin(), pair.second.rend());
                maxSum = max(maxSum, pair.second[0] + pair.second[1]);
            }
        }
        
        return maxSum;
    }
};