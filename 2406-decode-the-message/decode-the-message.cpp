class Solution {
public:
    string decodeMessage(string key, string message) {
         unordered_map<char, char> map;
        string result;
        char currentChar = 'a';

        // Build the substitution table from the key
        for (char c : key) {
            if (c != ' ' && map.find(c) == map.end()) {
                map[c] = currentChar++;
            }
        }

        // Decode the message using the substitution table
        for (char c : message) {
            if (c == ' ') {
                result += c;
            } else {
                result += map[c];
            }
        }

        return result;
    }
};