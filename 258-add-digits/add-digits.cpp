class Solution {
public:
    int addDigits(int n) {
        int sum = 0;
        int corrected = n;

        while (corrected >= 10) {
            sum = 0;

            while (corrected > 0) {
                sum += corrected % 10;
                corrected /= 10;
            }

            corrected = sum;
        }

        return corrected;
    }
};