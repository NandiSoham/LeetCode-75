# Problem Link -> https://leetcode.com/problems/merge-strings-alternately/description/

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i, j = 0, 0
        result = []
        while i < len(word1) and j < len(word2):
            result.append(word1[i])
            result.append(word2[j])
            i += 1
            j += 1
        result.append(word1[i:])
        result.append(word2[j:])

        return "".join(result)


# Time Complexity -> O(n + m) , where where 'n' is the length of 'word1' and 'm' is the length of 'word2'
# Space Complexity -> O(1)
