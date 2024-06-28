# Problem Link -> https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution:
    def reverseWords(self, s: str) -> str:
        s = list(s[::-1])
        idx, left, right = 0, 0, 0
        n = len(s)

        while idx < n:
            while idx < n and s[idx] != " ":
                s[right] = s[idx]
                idx += 1
                right += 1

            if left < right:
                s[left:right] = reversed(s[left:right])
                if right < n:
                    s[right] = ' '
                right += 1
                left = right

            idx += 1

        return "".join(s[: right - 1])



# Time Complexity -> O(n)
# Space Complexity -> O(1)
