class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flag = 0;
        int max = 0;
        int i = 0;
        for(int j = 0;j<n;j++){
            if(nums[j] == 0){
                flag++;
            }
            while(flag > k){
                if(nums[i] == 0){
                    flag--;
                }
                i++;
            }
            max = std::max(j-i+1,max);
        }
        return max;
        }
};