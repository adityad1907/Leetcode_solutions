class Solution {
public:
    int scoreOfParentheses(string s) {
        int l = 0;
        int sr = 0;
        for(int i =0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                l++;
            }
            else{
                l--;

                if(s[i - 1] == '(')
                {
                    sr += pow(2,l);
                }
            }  
        }
        return sr;
    }
};