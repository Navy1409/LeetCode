class Solution {
public:
    void rotate(vector<vector<int>>& m) {
         int n=m.size();
        vector<vector<int>> temp(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                temp[i][j]=m[n-j-1][i];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                m[i][j]=temp[i][j];
            }
        }
    }
};