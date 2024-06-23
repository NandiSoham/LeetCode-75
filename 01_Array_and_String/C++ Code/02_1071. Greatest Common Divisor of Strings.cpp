// Problem Link -> https://leetcode.com/problems/greatest-common-divisor-of-strings/description/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();

        if(str1 + str2 != str2 + str1)
            return "";
        
        return str2.substr(0, gcd(len1, len2));
    }
};



// Time Complexity -> O(n+m) where 'n' is the length of 'str1' and 'm' is the length of 'str2'.
// Space Complexity -> O(1)
