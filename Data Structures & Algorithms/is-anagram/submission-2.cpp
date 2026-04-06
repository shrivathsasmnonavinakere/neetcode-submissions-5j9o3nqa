class Solution {
public:
    bool isAnagram(string s, string t) {
        int fre[26]={0};
        if(s.size()!=t.size()) return false;
        for(char c:s){
            fre[c-'a']++;
        }
        for(char s:t){
            fre[s-'a']--;
        }
        for(int i=0;i<26;i++){
            if(fre[i]!=0)return false;
        }
        return true;
    }
};
