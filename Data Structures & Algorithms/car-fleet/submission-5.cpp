class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,float>>car(position.size());
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            pair<int,float>x={position[i],time};
            car[i]=x;
        }
        sort(car.begin(),car.end());
        int numfleet=1;
        double earliest=car.back().second;
        for(int i=car.size()-2;i>=0;i--){
            if(car[i].second>earliest){
                numfleet++;
                earliest=car[i].second;
            }
        }
        return numfleet;
    }
};
