class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();

        // Find last occurrence for each garbage type
        int lastM = 0, lastP = 0, lastG = 0;
        for (int i = 0; i < n; ++i) {
            for (char c : garbage[i]) {
                if (c == 'M') lastM = i;
                else if (c == 'P') lastP = i;
                else if (c == 'G') lastG = i;
            }
        }

        // Prefix sum for travel, prefix[i] = total travel time to reach house i
        vector<int> prefix(n, 0);
        for (int i = 1; i < n; ++i)
            prefix[i] = prefix[i-1] + travel[i-1];

        int total = 0;
        // Add collection time: 1 min for each garbage piece
        for (const string& s : garbage)
            total += s.size();

        // Add travel time for each type (up to last needed house)
        total += prefix[lastM] + prefix[lastP] + prefix[lastG];

        return total;
    }
};