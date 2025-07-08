class Solution {
public:
    int countArrangement(int n) {
         vector<bool> visited(n + 1, false);
        return count(n, 1, visited);
        }
    private:
        int count(int n, int pos, vector<bool>& visited) {
        if (pos > n) return 1;
        int total = 0;
        for (int i = 1; i <= n; ++i) {
            if (!visited[i] && (i % pos == 0 || pos % i == 0)) {
                visited[i] = true;
                total += count(n, pos + 1, visited);
                visited[i] = false;
            }
        }
        return total;
    }
};