class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int lenv=words.size();
        int lenpref= pref.length();
        int j=0,cnt=0;
        for(int i=0; i<lenv; i++){
            if(words[i][j]==pref[j]){
                while(words[i][j]==pref[j] && j<lenpref){
                    j++;
                }
                if(j==lenpref){
                    j=0;
                    cnt++;
                }
            }
            j=0;
        }
        return cnt;
    }
};