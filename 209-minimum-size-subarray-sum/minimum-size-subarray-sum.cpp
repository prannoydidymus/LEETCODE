class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int sum = 0;
        int maxs = 0;
        int min =INT_MAX;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            while(sum >= target){
min = std::min(min,i-j+1);
sum -= nums[j];
j++;
            }
        }
        return (min == INT_MAX) ? 0:min;
    }
};