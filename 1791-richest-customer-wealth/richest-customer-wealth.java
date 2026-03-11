class Solution {
    public int maximumWealth(int[][] accounts) {
       int maxacc = 0;
        int n = accounts.length;

        for(int i = 0;i<n;i++)  {
            int current = 0;
            for(int j = 0;j<accounts[i].length;j++){
            current += accounts[i][j];
            }
             maxacc = Math.max(maxacc,current);    
        }    
                return maxacc;
        }

}