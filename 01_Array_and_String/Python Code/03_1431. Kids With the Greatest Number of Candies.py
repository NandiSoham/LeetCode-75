# Problem Link -> https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxCandy = max(candies)
        res = []
        
        for i in candies:
            if i + extraCandies >= maxCandy:
                res.append(True)
            else:
                res.append(False)
        
        return res


# Time Complexity -> O(n)
# Space Complexity -> O(1)
