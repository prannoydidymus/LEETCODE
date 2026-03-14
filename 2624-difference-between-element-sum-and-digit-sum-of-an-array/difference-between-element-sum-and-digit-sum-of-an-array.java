class Solution {
    public int differenceOfSum(int[] nums) {
        int n = nums.length;
        int sum1 = 0,a;
        int sum2 = 0;
        for(int i = 0;i<n;i++){
           
            sum1 += nums[i];

 while(nums[i]>0){
     a = nums[i] %10;
    sum2 += a;
    nums[i] /= 10;
 }
        }  
        return  Math.abs(sum1- sum2);
    }
}