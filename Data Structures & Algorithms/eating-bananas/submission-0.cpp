class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int x=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>x){
                x=piles[i];
            }
        }


        int low=1,high=x,mid=0;
        while(low<=high){
            mid=(low+high)/2;
            int totalhour=hourlyeating(piles,mid);
            if(totalhour<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;

    }
    
    int hourlyeating(vector<int>& q,int hourly){
        int totalhour=0;
        int size=q.size();

        for(int i=0;i<size;i++){
            totalhour+=ceil(double(q[i])/double(hourly));

        }
        return totalhour;
    }    
};






