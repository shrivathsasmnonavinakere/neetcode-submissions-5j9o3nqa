class Solution {
public:
    bool issame(vector <int>& hash1,vector <int>&hash2){
        for(int k=0;k<26;k++){
            if(hash1[k]!=hash2[k]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int>hash1(26,0);
        
        for(int i=0;i<s1.size();i++){
            hash1[s1[i]-'a']++;
        }
        for(int j=0;j<s2.length();j++){
            int r=0,index=j;
            vector<int>hash2(26,0);
            while(r<s1.length() && index<s2.length()){
                hash2[s2[index]-'a']++;
                r++;
                index++;
            }
            if(issame(hash1,hash2)){
                return true;
            }
        }
        return false;
    }
};
