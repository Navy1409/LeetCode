class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> diff;
        int n=h.size(), i=0, d;
        for(i=0; i<n-1; i++){
           if(h[i+1]<=h[i]){
               continue;
           }
           d=h[i+1]-h[i];
           if(d<=b){
               b-=d;
               diff.push(d);
           }
           else if(l>0){
               if(diff.size()){
                   int x=diff.top();
                   if(x>d){
                       b+=x;
                       diff.pop();
                       diff.push(d);
                       b-=d;
                   }
               }
               l--;
           }
           else{
               break;
           }
        }
        return i;
    }
};