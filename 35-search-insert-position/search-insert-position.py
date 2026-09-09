class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n = len(nums)
        index = 0
        for i in range(0,n):
            if target < nums[0]:
                return 0
            if target == nums[i]:
                return i
            if target > nums[i]:
                index = i
        return index + 1

