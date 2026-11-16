class Solution {
public:
    bool isPowerOfThree(int n) {
        long long power = 1;
        for(int i =0;i<31;i++){
            if(power == n){
                return true;
            }
            power = power *3;
        }
        return false;
    }
    
};