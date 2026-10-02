class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int b;
        int ht;
        int maxarea = 0;
        
        while(l<r)
        {
            b = r - l;
            ht = min(height[l] , height[r]);
            int currarea = 0;
            currarea = b * ht;
            maxarea = max(maxarea,currarea);

            height[l]<height[r]? l++ : r--;
        }
        return maxarea;
    }
};