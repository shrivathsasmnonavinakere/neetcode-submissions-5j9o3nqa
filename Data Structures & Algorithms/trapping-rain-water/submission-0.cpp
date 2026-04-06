class Solution {
public:
    int trap(vector<int>& height) {
        int container=0;
        for(int i=0;i<height.size();i++){
            int rightheight=0;
            int leftheight=0;
            int temp=0;
            if(i==0){
                for(int z=i+1;z<height.size();z++){
                    if(rightheight<height[z]){
                        rightheight=height[z];
                    }
                }
                temp=(min(height[i],rightheight)-height[i]);
                if(temp>0){
                    container=container+temp;
                    continue;
                }
            }
            for(int x=i;x>=0;x--){
                if(leftheight<height[x]){
                    leftheight=height[x];
                }
            }
            for(int v=i+1;v<height.size();v++){
                if(rightheight<height[v]){
                    rightheight=height[v];
                }
            }
            temp=(min(leftheight,rightheight)-height[i]);
            if(temp>0){
                container=container+ temp;
            }
        }
        return container;

    
    }
};
