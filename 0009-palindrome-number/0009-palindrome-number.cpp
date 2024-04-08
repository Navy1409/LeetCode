class Solution {
public:
    bool isPalindrome(int x) {
        string y=to_string(x);
        bool ans=true;
        for(int i=1; i<=(y.length()/2); i++){
            if(y[i-1]!=y[y.length()-i]){
                ans=false;
            }
        }
        return ans;
    }
};