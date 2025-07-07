class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int n = events.size();
        int i = 0, ans = 0;

        int last_day = 0;
        for (auto& e : events) last_day = max(last_day, e[1]);

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int day = 1; day <= last_day; ++day) {
            
            while (i < n && events[i][0] == day) {
                minHeap.push(events[i][1]);
                ++i;
            }
            
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }
            
            if (!minHeap.empty()) {
                minHeap.pop();
                ++ans;
            }
        }
        return ans;
    }
};