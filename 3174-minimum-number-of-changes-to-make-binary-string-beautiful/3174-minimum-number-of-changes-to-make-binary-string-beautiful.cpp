class Solution {
public:
    int minChanges(string s) {
        int ans=0, cnt=1;
        for(int i=1; i<s.size(); i++){
            if(s[i]!=s[i-1] && cnt%2==1){
                ans++;
                cnt=1;
                i++;
            }
            else if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                cnt=1;
                // i++;
            }
        }
        return ans;
    }
};