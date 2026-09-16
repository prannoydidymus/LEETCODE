class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
          int sum = 0;
          int maxs = nums[0];
          for(int i = 0;i<n;i++){
sum += nums[i];

if(sum > maxs){
    maxs = sum;
}
if(sum <0){
    sum = 0;
}

          }
          return maxs;
    }
};