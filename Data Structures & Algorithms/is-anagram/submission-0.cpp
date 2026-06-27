class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char, int> str1;
        map<char, int> str2;
        bool is_Anagram = true;
        for (char c : s) str1[c]++;
        for (char c : t) str2[c]++;
        for (char c : s){
            if (str1[c] != str2[c]){
                is_Anagram = false;}
        }
        return is_Anagram;
    }
};