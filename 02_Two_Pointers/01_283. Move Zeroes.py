# Problem Link -> https://leetcode.com/problems/move-zeroes/description/

# ------------------------------- Approach - 1 ---------------------------

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        temp_list = []
        for num in nums:
            if num != 0:
                temp_list.append(num)
        
        for i in range(len(temp_list)):
            nums[i] = temp_list[i]
        
        for i in range(len(temp_list), len(nums)):
            nums[i] = 0



# Time Complexity -> O(n)
# Space Complexity -> O(n)

# ------------------------------------------------------------------------
