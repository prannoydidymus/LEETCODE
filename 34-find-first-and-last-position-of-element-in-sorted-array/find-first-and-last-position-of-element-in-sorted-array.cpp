class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int first = Binary_search(nums,low,high,target);
        int second = Binary_search(nums,low,high,target + 1) -1;

        if(first < n && target == nums[first]){
            return {first,second};
        }
        return {-1,-1};
    }
       int  Binary_search(vector<int>& nums,int low,int high, int target){
        int mid;
            while(low <= high){
                mid = (low + high)/2;
                if(target > nums[mid]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        return low;
    }
};