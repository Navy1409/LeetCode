class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        vector<int> a;
        while(n){
            a.insert(a.begin(), n%2);
            n/=2;
        }
        for(int i=0; i<a.size(); i++){
            if(a[i]==1){
                a[i]=0;
            }
            else{
                a[i]=1;
            }
        }
        int j=0;
        int ans=0;
        for(int i=a.size()-1; i>=0; i--){
            ans+=a[i]*pow(2,j);
            j++;
        }
        return ans;
    }
};