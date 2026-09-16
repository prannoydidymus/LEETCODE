class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int min = 0;
        int mins = 0;
        int maxs = nums[0];
        int total = 0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            total += nums[i];
            if(sum > maxs){
                maxs = sum;
            }
            if(sum <0){
                sum = 0;
            }

            mins += nums[i];
            if(mins < min){
                min = mins;
            }
            if(mins > 0){
                mins = 0;
            }

        }
if(maxs < 0){
    return maxs;
}
int cs = total - min;
return std::max(maxs,cs);
    }
};