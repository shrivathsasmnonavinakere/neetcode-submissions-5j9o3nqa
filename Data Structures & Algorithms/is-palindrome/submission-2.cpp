class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>d;
        for(int i=0;i<s.size();i++){
            if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a' && s[i]<='z')||
            (s[i]>='0'&&s[i]<='9')){
                char o=tolower(s[i]);
                d.push_back(o);  
            }
        }
        
        int z=0;
        int j=d.size()-1;
        while(z<j){
            if(d[z]==d[j]){
                z++;
                j--;
            }
            else{
                return false;
            }
        }

        return true;
        
    }
};
