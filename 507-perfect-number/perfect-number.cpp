class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum =0;
        int divider = num-1;
        int corrected =num;
        while(divider != 0){
            if(corrected % divider == 0){
                sum = sum + divider;
                divider--;
            }
            else{divider--;}
        }
        if(sum == num){return true;}
        return false;
    }
};