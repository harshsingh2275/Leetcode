class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int area=0; while(l<r){
            int h= min(height[l], height[r]);
            area= max(h*(r-l), area);
            if(height[l]<=height[r]) l++;
            else r--;
        }
        return area;
    }
};