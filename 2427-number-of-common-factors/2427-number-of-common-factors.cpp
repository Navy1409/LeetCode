class Solution {
public:
    int commonFactors(int a, int b) {
        int m=a, n=b, c=0;
        // if(b>a){
        //     m=b;
        //     n=a;
        // }
        for(int i=1; i<=n; i++){
            if(m%i==0&&n%i==0){
                c++;
            }
        }
        return c;
    }
};