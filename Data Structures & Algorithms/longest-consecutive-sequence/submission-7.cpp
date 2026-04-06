class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        } 
        vector<int>arr;
        for(auto i=st.begin();i!=st.end();i++){
            arr.push_back(*i);
        }
        int res=0;
        int count=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(arr[i+1]==arr[i]+1){
                count++;
            }
            else{
                res=max(res,count);
                count=1;
            }
        }
        return res;
    }
};
