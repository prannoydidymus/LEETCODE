class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        water = 0
        while left < right:
            width = right - left
            curwater = min(height[left],height[right])
            current = width * curwater
            water = max(water,current)

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return water