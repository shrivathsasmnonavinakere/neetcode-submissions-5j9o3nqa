class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left=0,right=k;
        vector<int>arr;
        while(left<nums.size()-k+1){
            int maxval=INT_MIN;
            for(int mid=left;mid<right;mid++){
                    maxval=max(maxval,nums[mid]);
            }
            arr.push_back(maxval);
            left++;
            right++;
        }
        return arr;
    }
};
