class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
    
        for(int i=0;i<nums.size();i++){
            int k=i+1;
            int j=nums.size()-1;
            if(i>0&&nums[i]==nums[i-1]) continue;
            while(k<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    j--;
                }
                else if(sum<0){
                    k++;
                }
                else{
                    vector<int>temp={nums[i],nums[k],nums[j]};
                    res.push_back(temp);
                    j--;
                    k++;
                    while(k<j && nums[j]==nums[j+1]) j--;
                    while(k<j && nums[k]==nums[k-1]) k++;
                }
                
            }
        }
        return res;       
    }
};
