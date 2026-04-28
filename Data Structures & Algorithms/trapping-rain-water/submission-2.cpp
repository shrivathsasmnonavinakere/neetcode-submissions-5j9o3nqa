class Solution {
public:
    int trap(vector<int>& height) {
       int container=0;
       int leftmax=0,rightmax=0;
       int left=0,right=height.size()-1;
       while(left<right){
            if(height[left]<=height[right]){
                if(leftmax>=height[left]){
                    container+=leftmax-height[left];
                }
                else leftmax=height[left];
                left++;
            }
            else{
                if(rightmax>=height[right]){
                    container+=rightmax-height[right];

                }
                else rightmax=height[right];
                right--;
            }
       }
       return container;
       
    }
};