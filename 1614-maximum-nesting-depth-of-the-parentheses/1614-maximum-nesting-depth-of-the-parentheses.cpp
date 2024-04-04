class Solution {
public:
    int maxDepth(string s) {
        int len= s.size();
        int c=0, max_depth=0;
        for(int i=0; i<len; i++){
            if(s[i]=='('){
                c++;
            }
            if(max_depth<c){
                max_depth=c;
            }
            if(s[i]==')'){
                c--;
            }
        }
        return max_depth;
    }
};