class Solution {
    public int minMoves(int[] nums) {
      int n = nums.length;
      int min = nums[0];
      int count = 0;
      for(int i = 1;i<n;i++){
        if(nums[i] < min){
            min = nums[i];
        }
      }
      for(int i = 0;i<n;i++){
        count += nums[i] - min;
      }
      return count;
      }
    }