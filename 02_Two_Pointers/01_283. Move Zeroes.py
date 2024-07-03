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


# ------------------------------- Approach - 2 ---------------------------

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        j = -1
        for i in range(len(nums)):
            if nums[i] == 0:
                j = i
                break
        
        if(j == -1): return

        for i in range(j+1, len(nums)):
            if nums[i] != 0:
                nums[i], nums[j] = nums[j], nums[i]
                j += 1


# Time Complexity -> O(n)
# Space Complexity -> O(1)

# ------------------------------------------------------------------------
