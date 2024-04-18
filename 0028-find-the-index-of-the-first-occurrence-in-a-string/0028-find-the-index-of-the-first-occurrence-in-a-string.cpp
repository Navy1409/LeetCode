class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size(), h=haystack.size();
        int ans=-1;
        for(int i=0; i<h;i++){
            for(int j=0; j<n; j++){
                if(needle[j]!=haystack[i+j]){
                    break;
                }
                else if( j==n-1){
                    ans=i;
                    break;
                }
            }
            if(ans!=-1){
                break;
            }
        }
        return ans;
    }
};