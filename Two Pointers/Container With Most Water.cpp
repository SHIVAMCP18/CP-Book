class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0;

        int p1 = 0 ,  p2 = height.size() - 1;
        while(p1 < p2) {
            mx = max(mx , min(height[p1] , height[p2]) * (p2 - p1));
            if(height[p1] < height[p2]) p1++;
            else p2--;
        }
        return mx;
    }
};