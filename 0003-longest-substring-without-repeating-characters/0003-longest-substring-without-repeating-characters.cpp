class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> seen(128,false);
        int l = 0;
        int maxl = 0;

        for(int r = 0;r<s.length();r++)
        {
            while(seen[s[r]])
            {
                seen[s[l]] = false;
                l++;
            }

            seen[s[r]] = true;
            maxl = max(maxl,r-l+1);
        }
        return maxl;
    }
};