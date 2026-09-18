class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int n = nums.size();
         int flag = 1;
         int maxs = 0;
         int i = 0;
         for(int j = 0;j<n;j++){
            if(nums[j] == 0){
                flag-- ;
            }
            while(flag < 0){
                if(nums[i] == 0){
                    flag++;
                }
                i++;
            }
maxs = std::max(j-i,maxs);
         }
         return maxs;
    }
};