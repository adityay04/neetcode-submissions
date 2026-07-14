class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> st;
        int max_area = 0;
        
        heights.push_back(0);
        int n = heights.size();
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[i] < heights[st.back()]) {
                int h = heights[st.back()];
                st.pop_back();
                
                int w;
                if (st.empty()) {
                    w = i;
                } else {
                    w = i - st.back() - 1;
                }
                
                max_area = max(max_area, h * w);
            }
            st.push_back(i);
        }
        
        heights.pop_back();
        
        return max_area;
    }
};