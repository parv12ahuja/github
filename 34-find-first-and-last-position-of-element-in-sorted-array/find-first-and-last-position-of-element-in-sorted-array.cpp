class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low =0;
        int ans_left=-1;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans_left = mid;
                high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        low = 0;
        int ans_right=-1;
         high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans_right = mid;
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {ans_left,ans_right};
    }
};