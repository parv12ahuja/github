class Solution {
public:
    int countDigits(int num) {
       int corrected = num;
       int remainder = 0;
       int count =0;
       while(corrected >0){
        remainder = corrected%10;
        if(num%remainder == 0){count++;}
        corrected = corrected/10;
       } 
       return count;
    }
};