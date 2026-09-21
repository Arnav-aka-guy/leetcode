class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> a1;
        unordered_map<string, char> a2;
        stringstream ss(s);
        string word;
        int i = 0;
        while (ss >> word) {
            if (i == pattern.size())
                return false;
            char c = pattern[i];
            if (a1.count(c) && a1[c] != word)
                return false;
            if (a2.count(word) && a2[word] != c)
                return false;
            a1[c] = word;
            a2[word] = c;
            i++;
        }
        return i == pattern.size();
    }
};