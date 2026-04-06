class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            int first_number=nums[i];
            int second_number=target-first_number;
            if(mpp.find(second_number)!=mpp.end()){
                return {mpp[second_number],i};
            }
            mpp[first_number]=i;

    
            
        }
        return {};
    
    }
};
