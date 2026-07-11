class Solution {
    public int maximumDifference(int[] nums) {
        int n = nums.length;
        int minimum = -1;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i] < nums[j]){
                int max = (nums[j] - nums[i]);
                if(max > minimum){
                    minimum = max;
                }
                }
            }
        }
        return minimum;
    }
}