// Problem Link -> https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int right = 0, left = 0;
        int idx = 0;
        int n = s.length();

        while (idx < n) {
            while (idx < n && s[idx] != ' ') {
                s[right++] = s[idx++];
            }

            if (left < right) {
                reverse(s.begin() + left, s.begin() + right);
                s[right] = ' ';
                right++;
                left = right;
            }
            idx++;
        }

        return s.substr(0, right - 1);
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
