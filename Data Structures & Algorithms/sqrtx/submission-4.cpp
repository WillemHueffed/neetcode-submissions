class Solution {
   public:
    int mySqrt(int x) {
        int res = 0;
        int l = 0;
        int r = x;
        while (l <= r) {
            int mid = (l + r) / 2;
            cout << mid << endl;
            if ((long long) mid * mid == x) return mid;
            if ((long long) mid * mid > x)
                r = mid - 1;
            else {
                res = mid;
                l = mid + 1;
            }
        }
        return res;
    }
};