int missingNumber(int* nums, int numsSize) {
    int a = 0;
           int  sum = numsSize * (numsSize+1)/2;
    for(int i = 0;i<numsSize;i++){

        a += nums[i];
    }
    return sum-a;
}