class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        profit = 0
        low = prices[0]
        for i in range(0,n):
            low = min(low,prices[i])
            profit = max(profit,prices[i] - low)
        return profit