class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& q) {
        sort(q.begin(), q.end());
        int n=q.size(), j=0;
        vector<int> v;
        for(int i=0; i<n; i++){
            if(i%2==0){
                v.push_back(q[j]);
                j++;
            }
            else{
                v.push_back(0);
            }
        }
        int flag;
        if(n%2==0){
            flag=1;
        }
        else{
            flag=0;
        }
        int i=0;
        while(find(v.begin(), v.end(), 0)!=v.end()){
            if(v[i]==0 && flag==1){
                v[i]=q[j];
                j++;
                flag=0;
            }
            else if(v[i]==0 && flag==0){
                flag=1;
            }
            i++;
            if(i==n){
                i=0;
            }
        }
        return v;
        
    }
};


