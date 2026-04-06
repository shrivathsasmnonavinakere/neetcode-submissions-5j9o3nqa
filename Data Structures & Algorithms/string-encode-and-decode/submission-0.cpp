class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int j=0;j<strs.size();j++){
            s+=to_string(strs[j].size())+"#"+strs[j];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }//substring(start,lenght);
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            res.push_back(word);
            i=j+1+len;
        }
        return res;

    }
};
