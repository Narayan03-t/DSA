class Solution {
public:
    vector<int> result;
    vector<bool> used;

    bool backtrack(int index, int n) {
        if (index == result.size()) return true; 
        
        if (result[index] != 0) 
            return backtrack(index + 1, n);

        for (int i = n; i >= 1; i--) { 
            if (used[i]) continue;
            
            if (i == 1) { 
                result[index] = 1;
                used[i] = true;
                if (backtrack(index + 1, n)) return true;
                result[index] = 0;
                used[i] = false;
            } else {
                int secondPos = index + i;
                if (secondPos < result.size() && result[secondPos] == 0) {
                    result[index] = result[secondPos] = i;
                    used[i] = true;
                    if (backtrack(index + 1, n)) return true;
                    result[index] = result[secondPos] = 0;
                    used[i] = false;
                }
            }
        }
        
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        result.assign(2 * n - 1, 0);
        used.assign(n + 1, false);
        backtrack(0, n);
        return result;
    }
};