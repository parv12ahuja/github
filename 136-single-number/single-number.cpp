class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int target = nums[i];
            int count =0;
            for(int j=0;j<n;j++){
                if(nums[j] == target){
                    count++;
                }

            }
                            if(count == 1){
                    return nums[i];
                }
                else{
                    count =0;
                }
        }
        return 0;
    };
};