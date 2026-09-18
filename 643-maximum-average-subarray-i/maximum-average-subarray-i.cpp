class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxs = 0;
        double sum = 0;
        for(int i = 0;i<k;i++){
sum += nums[i];
        }
        maxs = sum;
        int j = 0;
        for(int i = k;i< n;i++){
sum = sum - nums[j] + nums[i];
j++;
maxs = std::max(maxs,sum);
        }
        return maxs/k;
    }
};