class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        int i = 0, j = n-1;
        while(i<j){
            int h = min(heights[i], heights[j]);
            int w = j-i;
            int area = h*w;
            maxi = max(maxi, area);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};
