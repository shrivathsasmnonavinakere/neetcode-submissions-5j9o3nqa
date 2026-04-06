class Solution {
public:
    int maxArea(vector<int>& heights) {
        // vector<int>max;
        int max=0;
        int j=heights.size()-1;
        int i=0;
        while(i<j){
            int width=j-i;
            int height=min(heights[i],heights[j]);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
            int cap=width*height;
            if(max<cap){
                max=cap;
            }
        }
        return max;

    }
};
