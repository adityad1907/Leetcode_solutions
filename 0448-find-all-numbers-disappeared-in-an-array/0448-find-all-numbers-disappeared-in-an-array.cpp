class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        int i = 0;
        int n = nums.size();

        while (i < n) {
            int correctIdx = nums[i] - 1;
            if (nums[i] != nums[correctIdx]) {
                std::swap(nums[i], nums[correctIdx]);
            } else {
                i++;
            }
        }
        std::vector<int> ans;
        for (int j = 0; j < n; j++) {
            if (nums[j] != j + 1) {
                ans.push_back(j + 1);
            }
        }
        
        return ans;
    }
};