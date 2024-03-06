class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string ans;
        int len=s.size();
        for(int i=0; i<len; i++){
            if(s[i]==')'){
                c--;
            }
            if(c>=1){
                cout<<s[i];
                ans+=s[i];
            }
            if(s[i]=='('){
                c++;
            }
        }
        return ans;
        
    }
};