class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float> st;
map<int,float> mpp;

for(int i = 0; i < position.size(); i++){
    float time = (float)(target - position[i]) / speed[i];
    mpp[position[i]] = time;
}

int cer = 0;

for(auto i = mpp.rbegin(); i != mpp.rend(); i++){
    if(st.empty() || i->second > st.top()){
        cer++;
        st.push(i->second);   // ✅ no pop
    }
}

return cer; 
    }
};
