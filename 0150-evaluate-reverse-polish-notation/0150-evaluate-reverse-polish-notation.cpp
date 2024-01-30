class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int flag=0;
        int len= tokens.size();
        int ans=0;
        for(int i=0; i<len; i++){
            //check if it is +, -, *, /
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                //convert last 2 into integer
                int a= stoi(tokens[i-2]);
                int b= stoi(tokens[i-1]);
                //token[i] gives "+" but token[i][0] gives '+'
                switch(tokens[i][0]){
                        //to_string convert int to string
                    case '+' : tokens[i-2]=to_string(a+b); break;
                    case '-' : tokens[i-2]=to_string(a-b); break;
                    case '*' : tokens[i-2]=to_string(a*b); break;
                    case '/' : tokens[i-2]=to_string(a/b); break;
                }
                //pushing string to 2 place forward as 2,3,+ =5 so instesd of 2, 5 is there and char after + is in place of 3
                for(int j=i-1; j<len-2; j++){
                    tokens[j]=tokens[j+2];
                }
                //decreasing length as shifting is done
                len=len-2;
                // i to correct place
                i=i-2;
            }
            else{
                continue;
            }
            
        }
        //convert ans to int
        ans= stoi(tokens[0]);
        return ans;
    }
};