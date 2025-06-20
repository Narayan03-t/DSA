class Solution {
public:
    string generateTag(string caption) {
        stringstream ss(caption);
    string word, tag = "#";
    bool firstWord = true;

    while (ss >> word) {
        
        string cleanWord = "";
        for (char c : word) {
            if (isalpha(c)) cleanWord += c;
        }
        if (cleanWord.empty()) continue;

        
        if (firstWord) {
            for (char &c : cleanWord) c = tolower(c);
            tag += cleanWord;
            firstWord = false;
        } else {
            cleanWord[0] = toupper(cleanWord[0]);
            for (int i = 1; i < cleanWord.length(); ++i)
                cleanWord[i] = tolower(cleanWord[i]);
            tag += cleanWord;
        }
        
        if (tag.length() >= 100) {
            tag = tag.substr(0, 100);
            break;
        }
    }
    return tag;
    }
};