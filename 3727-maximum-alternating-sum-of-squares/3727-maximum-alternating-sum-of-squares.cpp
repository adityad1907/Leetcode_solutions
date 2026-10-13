class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long score = 0;
        vector<int> ans;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] < 0)
            {
                nums [i] *= -1;
            }
        }
        sort(nums.begin() , nums.end());
        int l = 0;
        int h = nums.size() - 1;
        for(int i = 0;i<nums.size();i++)
        {
            if( i % 2 == 0)
            {
                ans.push_back(nums[h]);
                h--;
            }else
            {
                ans.push_back(nums[l]);
                l++;
            }
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(i % 2 == 0)
            {
                score +=(ans[i] * ans[i]);
            }
            else
            {
                score -=(ans[i] * ans[i]);
            }
        }
        return score;
    }
};