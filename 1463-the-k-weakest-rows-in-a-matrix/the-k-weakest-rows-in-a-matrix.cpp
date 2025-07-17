class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int y = mat.size(), x = mat[0].size(), idx = 0;
        vector<int> vis(y), ans(k);
        for (int j = 0; j <= x; j++)
            for (int i = 0; i < y; i++)
                if (!vis[i] && (j == x || !mat[i][j])) {
                    ans[idx++] = i;
                    vis[i] = 1;
                    if (idx == k) return ans;
                }
        return ans;
    }
};