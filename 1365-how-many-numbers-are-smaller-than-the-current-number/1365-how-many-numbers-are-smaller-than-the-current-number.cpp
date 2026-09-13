class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> newarr;
        
        for(int i = 0;i<nums.size();i++)
        {
            int count = 0;
            for(int j = 0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    count++;
                }
            }
            newarr.push_back(count);
        }
        return newarr;
    }
};