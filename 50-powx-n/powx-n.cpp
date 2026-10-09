class Solution {
public:
    double myPow(double x, int n) {
        long long binForm = n;
        long double base = x;

        if (binForm < 0) {
            base = 1.0L / base;
            binForm = -binForm;
        }

        long double ans = 1.0L;

        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= base;
            }

            base *= base;
            binForm /= 2;
        }

        return static_cast<double>(ans);
    }
};