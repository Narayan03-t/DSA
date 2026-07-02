class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;

        for(int i=0;i<arr.size();i++){
            int occ = arr[i];

            freq[occ]++;
        }
        unordered_set<int>seen;
        for(auto it : freq){
            int num = it.first;
            int occurence = it.second;

            if(seen.find(occurence) != seen.end()){
                return false;
                
            }

            seen.insert(occurence);
        }
        return true;
    }
};