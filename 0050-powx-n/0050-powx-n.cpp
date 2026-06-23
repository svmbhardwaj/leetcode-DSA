class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double ans = 1.0;

        while (N > 0) {
            // Odd power hoga tb
            if (N % 2 == 1) {
                ans *= x;
            }
            //vrna, always
            x *= x;
            N /= 2;
        }

        return ans;
    }
};