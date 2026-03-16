int singleNumber(int* nums, int numsSize) {
int index = 0;
   for(int i = 0;i<numsSize;i++){
index = index ^ nums[i];
   }
   return index;
}
