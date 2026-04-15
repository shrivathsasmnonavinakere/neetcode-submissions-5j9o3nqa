class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int i=0;
        while(i<tokens.size()){
            string x=tokens[i];
            if(x=="+"||x=="-"||x=="*"||x=="/"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int t3;
                if(x=="+") t3=t2+t1;
                else if(x=="-") t3=t2-t1;
                else if(x=="*") t3=t2*t1;
                else if(x=="/") t3=t2/t1;
                st.push(t3);
            }
            else{
                st.push(stoi(x));
            }
            i++;
        }
        return st.top();
        



    }
};
