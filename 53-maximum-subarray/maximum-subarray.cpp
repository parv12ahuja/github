class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum =0;
        int max_sum = nums[0];
        int n = nums.size();
        for(int i=0;i<n;i++){
            current_sum += nums[i];
            max_sum = max(current_sum,max_sum);
            if(current_sum<0){
                current_sum = 0;
            }
        }
        return max_sum;}
};