class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        const int MINUTES_IN_DAY = 24 * 60;
        if (timePoints.size() > MINUTES_IN_DAY) return 0;

        vector<int> minutes;
        for (const auto& s : timePoints) {
            int h = stoi(s.substr(0, 2));
            int m = stoi(s.substr(3, 2));
            minutes.push_back(h * 60 + m);
        }
        sort(minutes.begin(), minutes.end());

        int minDiff = INT_MAX;
        for (size_t i = 1; i < minutes.size(); ++i) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }
        // Wrap-around difference (i.e., from end of day back to start)
        minDiff = min(minDiff, MINUTES_IN_DAY - (minutes.back() - minutes[0]));
        return minDiff;
    }
};