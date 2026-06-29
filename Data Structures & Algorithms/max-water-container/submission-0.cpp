class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = -1e9;
        int left = 0, right = height.size() - 1;
        while(left <= right) {
            int length = right - left;
            int breadth = min(height[left], height[right]);
            int area = length * breadth;
            maxArea = max(maxArea, area);

            if(height[left] < height[right])
                left++;
            else 
                right--;
        }

        return maxArea;
    }
};