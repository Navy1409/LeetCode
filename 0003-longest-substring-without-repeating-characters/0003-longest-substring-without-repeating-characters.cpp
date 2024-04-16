class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(), c=0, ans=0;
        // if(n==0){
        //     return 0;
        // }
        string temp;
        for(int i=0; i<n; i++){
            if(find(temp.begin(), temp.end(), s[i])!=temp.end()){
                c=1;
                temp="";
            }
            else{
                c++;
            }
            temp+=s[i];
            ans=max(ans,c);
        }
        return ans;
    }
};