class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        double ans = 1.0;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        while (power > 0) {
            // If power is odd
            if (power % 2 == 1) {
                ans *= x;
            }

            // Square the base
            x *= x;

            // Divide power by 2
            power /= 2;
        }

        return ans;
    }
};