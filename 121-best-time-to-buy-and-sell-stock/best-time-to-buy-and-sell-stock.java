class Solution {
    public int maxProfit(int[] prices) {
        int  n = prices.length;
        int profit = 0;
        int low = prices[0];
        for(int i = 0;i<n;i++){
            low = Math.min(low,prices[i]);
            profit = Math.max(profit,prices[i] - low);
        }
        return profit;
    }
}