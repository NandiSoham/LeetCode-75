# Problem Link -> https://leetcode.com/problems/can-place-flowers/description/

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        length = len(flowerbed)
        if n == 0:
            return True
        
        for i in range(length):
            if flowerbed[i] == 0:
                checkLeftEmpty = (i == 0) or (flowerbed[i - 1] == 0)
                checkRightEmpty = (i == length - 1) or (flowerbed[i + 1] == 0)

                if(checkLeftEmpty and checkRightEmpty):
                    flowerbed[i] = 1
                    n -= 1

                    if n == 0:
                        return True
        
        return False



# Time Complexity -> O(n)
# Space Complexity -> O(1)
