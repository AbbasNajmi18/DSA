// https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        int left=0;
        int right=height.size()-1;
        int maxArea=0;
        int currArea=((min(height[left],height[right]))*(right-left));

        while(left<right){
            currArea=((min(height[left],height[right]))*(right-left));
            maxArea=max(currArea,maxArea);
            if(height[left]<height[right]){
                left++;
            }
            else right--;
        }
        return maxArea;
    }
};


