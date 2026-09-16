class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int sum0 = arr[0];   
        int sum1 = arr[0];  
        int maxs = arr[0];  

        for(int i = 1; i < n; i++){

            int next_sum1 = max(sum0, sum1 + arr[i]);

            int next_sum0 = max(arr[i], sum0 + arr[i]);

            sum0 = next_sum0;
            sum1 = next_sum1;

            if(sum0 > maxs){
                maxs = sum0;
            }
            if(sum1 > maxs){
                maxs = sum1;
            }
        }
        
        return maxs;
    }
};