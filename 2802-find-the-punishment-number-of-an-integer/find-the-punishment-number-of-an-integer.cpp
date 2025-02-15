class Solution {
public:
    bool isValidPartition(string s, int target, int index, int sum) {
        if (index == s.size()) return sum == target;
        int num = 0;
        for (int i = index; i < s.size(); i++) {
            num = num * 10 + (s[i] - '0');
            if (isValidPartition(s, target, i + 1, sum + num)) return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
        int result = 0;
        for (int i = 1; i <= n; i++) {
            int square = i * i;
            if (isValidPartition(to_string(square), i, 0, 0)) {
                result += square;
            }
        }
        return result;
    }
};