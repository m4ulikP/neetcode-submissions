class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char, int> str1;
        map<char, int> str2;
        for (char c : s) str1[c]++;
        for (char c : t) str2[c]++;
        for (char c : s){
            if (str1[c] != str2[c]){
                return false;}
        }
        return true;
    }
};