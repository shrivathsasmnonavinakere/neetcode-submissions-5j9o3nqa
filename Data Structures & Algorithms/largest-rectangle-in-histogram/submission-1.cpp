class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        vector<int>pse(heights.size());
        int maxrec=0;
        for(int i=0;i<heights.size();i++){
            int ele=0;
            int pse=0;
            while(!st.empty()&&heights[st.top()]>heights[i]){
                ele=heights[st.top()];
                st.pop();
                pse=st.empty()?-1:st.top();
                maxrec=max(maxrec,ele*(i-pse-1));
            }
            st.push(i);
        }
        int n=heights.size();
        while(!st.empty()){
            int ele=heights[st.top()];
            st.pop();
            int pse=st.empty()?-1:st.top();
            maxrec=max(maxrec,ele*(n-pse-1));
        }
    return maxrec;
        
    }
};
