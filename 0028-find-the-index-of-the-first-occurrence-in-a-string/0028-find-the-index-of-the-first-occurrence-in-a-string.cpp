class Solution {
public:
    int strStr(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        
        if (m == 0) return 0;
        if (m > n) return -1;
        
        for (int i = 0; i <= n - m; ++i) {
            if (s1.substr(i, m) == s2) {
                return i;
            }
        }
        
        return -1;
    }
};