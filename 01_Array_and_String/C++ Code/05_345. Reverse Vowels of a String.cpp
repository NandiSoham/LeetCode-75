// Problem Link -> https://leetcode.com/problems/reverse-vowels-of-a-string/description/

class Solution {
public:
    bool checkIsVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            if (checkIsVowel(s[left]) && checkIsVowel(s[right])) {
                swap(s[left], s[right]);
                left++, right--;
            } else if (!checkIsVowel(s[left])) {
                left++;
            } else {
                right--;
            }
        }

        return s;
    }
};



// Time Complexity ->O(n)
// Space Complexity ->O(1)
