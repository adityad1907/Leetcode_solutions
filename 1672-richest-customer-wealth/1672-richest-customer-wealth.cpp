class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int max = 0;
        
        for (int i = 0; i < accounts.size(); i++) {
            int curr = 0;
            
            for (int j = 0; j < accounts[i].size(); j++) {
                curr += accounts[i][j];
            }
            
            if (curr > max) {
                max = curr;
            }
        }
        
        return max;
    }
};