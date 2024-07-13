# Problem Link -> https://leetcode.com/problems/is-subsequence/description/

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        ptr1, ptr2 = 0, 0
        m = len(s)
        n = len(t)

        while ptr1 < m and ptr2 < n:
            if s[ptr1] == t[ptr2]:
                ptr1 += 1
            ptr2 += 1
        
        return True if ptr1 == m else False



# Time Complexity -> O(n)
# Space Complexity -> O(1)
