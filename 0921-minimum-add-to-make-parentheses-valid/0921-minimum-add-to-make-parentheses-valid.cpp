class Solution {
public:
    int minAddToMakeValid(string s) {
        int r = 0;
        int c = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                c++;
            }
            else{
                if(c>0)
                {
                    c--;
                }
                else{
                    r++;
                } 
            }
        }
        return r + c;
    }
};