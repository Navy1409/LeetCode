class Solution {
public:
    string smallestNumber(string p) {
        int ic=0, dc=1, f=1;
        int len= p.size();
        string ans;
        for(int i=0; i<len; i++){
            if(p[i]=='I'){
                ic++;
            }
            else{
                dc++;
            }
        }
        int cd=0;
        int i=0;
        while(i<len){
            while(i<len && p[i]=='I' && f<=ic){
                ans+=f+'0';
                f++;
                i++;
            }
            while(i<len && p[i]=='D'){
                cd++;
                i++;
            }
            if(i==len || p[i]=='I'){
                for(int j=cd; j>=1; j--){
                    ans+=(ic+j)+'0';
                }
            }
            else{
                for(int j=cd-1; j>=0; j--){
                    ans+=(ic+j+1)+'0';
                }
            }
        }
        if(ans.size()<len+1){
            ans+=f++ +'0';
        }
        return ans;
    }
};