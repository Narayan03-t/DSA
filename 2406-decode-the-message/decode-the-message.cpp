class Solution {
public:
    string decodeMessage(string key, string message) {
        // create map and than mapped the key character to a->z
        unordered_map<char,char>map;
        char start = 'a';
        int index = 0;
        char space = ' ';
        map[space] = ' ';
        while(start <='z' && index < key.length()){
            // ya to map me pehle se present hoga tb aage badho
            // ya nhi hai to usko insert kro
            char currentChar = key[index];
            if(map.find(currentChar) != map.end()){
                // pehle se present hai
                index++;
            }
            else{
                // insert kro
                map[currentChar] = start;
                start++;
                index++;
            }
        }
        string ans = "";
        for(int i=0;i<message.size();i++){
            char messageChar = message[i];
            char decodeMsg = map[messageChar];
            ans.push_back(decodeMsg);
        }
        return ans;

    }
};