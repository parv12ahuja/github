class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int ans =-1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int result = 0;
            int mid = (high+low)/2;
            for(int i=0;i<n;i++){
                result += (nums[i] +mid -1)/mid;
            }
            if(result<=threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};