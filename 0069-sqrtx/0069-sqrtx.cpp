class Solution {
public:
    int mySqrt(int x) {
        
        long long a = 1;
        if(x<2)
        {
            return x;
        }
        else
        {
            long long l = 1;
            long long r = x;
            while (l <= r) {
                long long mid = l + (r - l) / 2;
                if (mid * mid <= x) {
                a = mid;        
                l = mid + 1;   
                } else {
                    r = mid - 1;
                }
            }
        }
        return (int)a;
    }
};