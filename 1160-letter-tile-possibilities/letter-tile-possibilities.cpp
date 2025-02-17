class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freq;
        for (char c : tiles) {
            freq[c]++;
        }
        return backtrack(freq);
    }
    
private:
    int backtrack(unordered_map<char, int>& freq) {
        int count = 0;
        for (auto& pair : freq) {
            if (pair.second > 0) {
                pair.second--;
                count++;
                count += backtrack(freq);
                pair.second++;
            }
        }
        return count;
    }
};