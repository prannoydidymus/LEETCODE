class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        int result = 0;
        int j = 0,i = 0;
        for(j = 0;j<n;j++){
            if(nums[j] == 0){
                flag--;
            }
            if(flag <0){
                i = j+1;
                flag = 0;
            }
            result = std::max(result,j-i+1);
            }
        return result;
    }
};