class Solution {
public:
    int reverse(int x) {

        int orignal = x;
        long long reverced =0;
        while(orignal!=0){
            int remainder = orignal % 10;
            reverced = reverced*10 + remainder;
            orignal = orignal /10; 
        }
        if(reverced > INT_MAX || reverced < INT_MIN){return 0;}
        return reverced;
    }
};