class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long totalPairs = n * (n - 1) / 2;
        long long goodPairs = 0;
        
        unordered_map<int, long long> diffCount;
        
        for (int i = 0; i < n; ++i) {
            int diff = nums[i] - i;
            diffCount[diff]++;
        }
        
        for (auto& [key, count] : diffCount) {
            if (count >= 2) {
                goodPairs += count * (count - 1) / 2;
            }
        }
        
        long long badPairs = totalPairs - goodPairs;
        return badPairs;
    }
};