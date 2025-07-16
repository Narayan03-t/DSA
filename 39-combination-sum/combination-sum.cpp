class Solution {
public:
void backtrack(vector<vector<int>>& results, vector<int>& current, vector<int>& candidates, int start, int target) {
        if (target == 0) {
            results.push_back(current);
            return;
        }
        if (target < 0) return;
        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            // Since we can reuse the same element, we pass i, not i+1
            backtrack(results, current, candidates, i, target - candidates[i]);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> current;
        backtrack(results, current, candidates, 0, target);
        return results;
    }
};