class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int area;
        int maxarea = 0;
        while(l<r)
        {
            area=min(height[l],height[r])*(r-l);    
            if (area>maxarea)
            {
                maxarea=area;
            }
            else if(min(height[l],height[r])==height[l])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxarea;
    }
};
