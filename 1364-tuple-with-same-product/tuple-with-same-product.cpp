class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> productCount;
        int n = nums.size();
        int result = 0;

        // Iterate over all pairs (i, j)
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];

                // If product exists, each previous occurrence contributes 8 new tuples
                result += productCount[product] * 8;

                // Store the frequency of the product
                productCount[product]++;
            }
        }
        return result;
        
    }
};