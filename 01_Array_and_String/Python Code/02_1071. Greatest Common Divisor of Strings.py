# Problem Link -> https://leetcode.com/problems/greatest-common-divisor-of-strings/description/

class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        len1 = len(str1)
        len2 = len(str2)

        if str1 + str2 != str2 + str1:
            return ""
        
        return str2[:gcd(len1, len2)]



# Time Complexity -> O(n+m) where 'n' is the length of 'str1' and 'm' is the length of 'str2'.
# Space Complexity -> O(1)
