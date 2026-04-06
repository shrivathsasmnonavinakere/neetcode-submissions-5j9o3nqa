class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int a=target-numbers[i];
            if(a==numbers[j]){

                return {i+1,j+1};
            }
            else if(a<numbers[j]){
                j--;
            }
            else{
                i++;
            }
        }
    }
};
