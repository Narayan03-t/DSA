class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballColors; 
        unordered_set<int> uniqueColors;   
        vector<int> result;
        
        for (auto& query : queries) {
            int ball = query[0], color = query[1];
            
            
            if (ballColors.count(ball)) {
                int prevColor = ballColors[ball];
                ballColors[ball] = color;
                
                
                bool stillExists = false;
                for (auto& pair : ballColors) {
                    if (pair.second == prevColor) {
                        stillExists = true;
                        break;
                    }
                }
                if (!stillExists) {
                    uniqueColors.erase(prevColor);
                }
            } else {
                ballColors[ball] = color;
            }
            
            uniqueColors.insert(color);
            result.push_back(uniqueColors.size());
        }
        
        return result;
    }
};