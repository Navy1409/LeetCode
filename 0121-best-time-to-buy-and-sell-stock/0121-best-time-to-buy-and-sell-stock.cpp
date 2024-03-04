class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxProfit=-1, min=INT_MAX;
        int len=p.size();
        for(int i=0; i<len;i++){
            if(p[i]<min){
                min=p[i];
            }
            maxProfit=max(maxProfit,(p[i]-min));
        }
        return maxProfit;
    }
};