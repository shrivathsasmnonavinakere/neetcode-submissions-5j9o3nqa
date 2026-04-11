class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>hash;
        int r=0,l=0,count=0,sindex=-1,minlen=1000000;
        for(int i=0;i<t.size();i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0) count++;
            hash[s[r]]--;
            while(count==t.size()){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sindex=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                    l++;
            }
            r++;

        }
        return sindex==-1?"":s.substr(sindex,minlen);
        
        
    }
};
