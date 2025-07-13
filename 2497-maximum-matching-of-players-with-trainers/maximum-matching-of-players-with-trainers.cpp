class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        
        int i = 0, j = 0, matches = 0;
        while (i < players.size() && j < trainers.size()) {
            if (players[i] <= trainers[j]) {
                // Match found
                matches++;
                i++;
                j++;
            } else {
                // Trainer can't train this player, try next trainer
                j++;
            }
        }
        return matches;
    }
};