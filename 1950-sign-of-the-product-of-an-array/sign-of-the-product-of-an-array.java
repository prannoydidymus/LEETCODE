class Solution {
    public int arraySign(int[] nums) {
        int count = 0;
        int n = nums.length;
        for(int i = 0;i<n;i++){
if(nums[i] == 0){
    return 0;
}
if(nums[i] < 0)
count++;
        }
        if(count%2 == 0){
            return 1;
        }
        else{
        return -1;
    }
}
}