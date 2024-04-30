class Solution {
public:
    string finalString(string s) {
        int len=s.size();
        string ans="";
        for(int i=0; i<len; i++){
            if(s[i]=='i'){
                reverse(ans.begin(), ans.end());
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};