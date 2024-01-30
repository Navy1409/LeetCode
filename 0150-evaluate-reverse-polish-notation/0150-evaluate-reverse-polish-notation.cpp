class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int flag=0;
        int len= tokens.size();
        int ans=0;
        for(int i=0; i<len; i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a= stoi(tokens[i-2]);
                int b= stoi(tokens[i-1]);
                switch(tokens[i][0]){
                    case '+' : tokens[i-2]=to_string(a+b); break;
                    case '-' : tokens[i-2]=to_string(a-b); break;
                    case '*' : tokens[i-2]=to_string(a*b); break;
                    case '/' : tokens[i-2]=to_string(a/b); break;
                }
                for(int j=i-1; j<len-2; j++){
                    tokens[j]=tokens[j+2];
                }
                len=len-2;
                i=i-2;
            }
            else{
                continue;
            }
            
        }
        ans= stoi(tokens[0]);
        return ans;
    }
};