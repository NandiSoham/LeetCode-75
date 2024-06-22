// Problem Link -> https://leetcode.com/problems/merge-strings-alternately/description/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size()) {
            result.push_back(word1[i++]);
            result.push_back(word2[j++]);
        }
        
        // Append remaining characters of word1, if any
        while (i < word1.size()) {
            result.push_back(word1[i++]);
        }
        
        // Append remaining characters of word2, if any
        while (j < word2.size()) {
            result.push_back(word2[j++]);
        }

        return result;
    }
};
