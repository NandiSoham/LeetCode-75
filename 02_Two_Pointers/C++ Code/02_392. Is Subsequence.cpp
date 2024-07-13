// Problem Link -> https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while(i < s.length() && j < t.length()){
            if(s[i] == t[j]) i++;
            j++;
        }

        if(i == s.length()) return true;
        return false;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
