class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int n = nums.length;
        int maxs = 0;
        int sum = 0;
        int min = 0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            if(sum > maxs){
                maxs = sum;
            }
            if(sum < min){
                min = sum;
            }
        }
        return maxs - min;
    }
}