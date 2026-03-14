class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int minimum = prices[0];
        int profit = 0;
        for(int i = 1;i<n;i++){
           minimum = Math.min(minimum,prices[i]);
profit = Math.max(profit,prices[i] - minimum);
        }
        return profit;
    }
}