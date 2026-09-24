class Solution {
public:
    int reverse(int x) {
        int result=0;
        while(x)
        {
            int t = x%10;
            x /=10;
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && t > 7)) return 0;
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && t < -8)) return 0;
            result = (result * 10) + t;
        }
        return result;
    }
};