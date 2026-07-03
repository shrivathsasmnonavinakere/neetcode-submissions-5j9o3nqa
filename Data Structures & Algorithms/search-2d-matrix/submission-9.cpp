class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            if(target<matrix[i][0]||matrix[i].back()<target){
                continue;
            }
            
            int left=0,right=matrix[i].size()-1,mid=0;
            while(left<=right){
                mid=(left+right)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else{
                    if(matrix[i][mid]<target){
                        left=mid+1;
                    }
                    else{
                        right=mid-1;
                    }

                }
            }
        }
        return false;  
    }
};
