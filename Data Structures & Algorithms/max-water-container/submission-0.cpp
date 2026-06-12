class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right = heights.size()-1;
        int area = 0;
        while(left<right){
            if(heights[left]<=heights[right]){
                if(area < ((right-left) * heights[left])){
                    area = ((right-left) * heights[left]);
                }
                left++;
            }
            else{
                if(area < ((right-left) * heights[right])){
                    area = ((right-left) * heights[right]);
                }
                right--;
            }
        }
        return area;
    }
};
