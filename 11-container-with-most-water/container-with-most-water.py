class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        water = 0
        while left < right:
            width = right - left
            current = min(height[left],height[right])
            curwater = width * current
            water = max(water,curwater)

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return water