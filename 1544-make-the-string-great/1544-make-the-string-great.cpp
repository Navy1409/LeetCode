class Solution {
public:
    string makeGood(string s) {
        stack<char> stack;
        for(auto c: s){
            if(!stack.empty() && abs(c-stack.top())==32){
                stack.pop();
            }
            else{
                stack.push(c);
            }
        }
        string ans="";
        while(!stack.empty()){
            ans=stack.top()+ans;
            stack.pop();
        }
        return ans;
    }
};