class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        int max1=0;
        while(j<prices.size()){
            if((prices[j]-prices[i])<0){
                i=j;
                j++;
            }
            else{
                int z=prices[j]-prices[i];
                max1=max(max1,z);
                j++;
            }

        }
        if(max1<0){
            return 0;
        }

        return max1;
    }
};
 

