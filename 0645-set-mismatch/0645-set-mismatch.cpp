class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    arr.push_back(nums[i]);
                }
            }
        }
        
        for (int i = 1; i <= nums.size(); i++) {
            bool found = false;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                arr.push_back(i);
                break;
            }
        }

        return arr;
    }
};