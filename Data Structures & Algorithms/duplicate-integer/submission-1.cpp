class Solution {
public:
    bool hasDuplicate(vector<int>& nums){
        set<int> st;
        int n1=nums.size();
        int i=0;
        while(i<n1){
            st.insert(nums[i]);
                i++;
        }
        if(st.size()<nums.size()){
            return true;
        }

        return false;
        
    }
};