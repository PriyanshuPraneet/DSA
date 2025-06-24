class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int areaMax = INT_MIN;
        while(l<r){
            int area = min(height[l],height[r]) * (r-l);
            areaMax = max(areaMax,area);
            if(height[l] <= height[r]) l++;
            else r--;
        }
        return areaMax;
    }
};