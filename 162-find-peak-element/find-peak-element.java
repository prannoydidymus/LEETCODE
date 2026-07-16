class Solution {
    public int findPeakElement(int[] nums) {
        int n = nums.length;
        if(n==0){
            return -1;
        }
        int c = nums[0];
        int index = 0;
        for(int i = 0;i<n;i++){
            if (c < nums[i]){
                c = nums[i];
                index = i;
            }
        }    
        return index;
        }
}