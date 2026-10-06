class Solution {
public:
    string reverseWords(string s) {
        vector<string> word ;
        string temp = "";
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] != ' ')
            {
                temp  += s[i];
            }
            else{
                if(!temp.empty())
                {
                    word.push_back(temp);
                    temp = "";
                }
            }
        }
        if(!temp.empty())
        {
            word.push_back(temp);
        }
        string ans;
        for(int i = (int)word.size() - 1; i>= 0;i--)
        {
            ans += word[i];
            if(i>0)
            {
                ans += " ";
            }
        }
        return ans;
    }
};