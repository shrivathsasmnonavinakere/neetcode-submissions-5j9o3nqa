class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto num:nums){
            mpp[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto x:mpp ){
            bucket[x.second].push_back(x.first);
        }
        vector<int>ans;
        for(int i=bucket.size()-1;ans.size()<k;i--){
            for(auto z:bucket[i]){
                ans.push_back(z);
            }
        }
        return ans;
    }
};
