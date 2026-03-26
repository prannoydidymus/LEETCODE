class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int a =0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
        nums[a] = nums[i];
        a++;
            }
        }
        for(int j = a;j<n;j++){
            nums[j] = 0;
        }
        }
    }
