class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int> ai, aj;
        int r=m.size();
        int c=m[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(m[i][j]==0){
                    ai.push_back(i);
                    aj.push_back(j);
                }
            }
        }
        int ajs=aj.size();
        int ais=ai.size();
        for(int i=0; i<ais; i++){
            for(int j=0; j<c; j++){
                m[ai[i]][j]=0;
            }
        }
        for(int j=0; j<ajs; j++){
            for(int i=0; i<r; i++){
                m[i][aj[j]]=0;
            }
        }
        
        
    }
};