bool canAliceWin(int* nums, int numsSize) {
    int a = 0,b = 0;
    for(int i = 0;i<numsSize;i++){
        if(nums[i]/10 !=0) 
        a += nums[i];
        else
        b += nums[i];
    }
    return abs(a-b) > 0;
}