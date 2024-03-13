class Solution {
public:
    int pivotInteger(int n) {
        if(n==1){
            return 1;
        }
        int a[n];
        for(int i=1; i<=n; i++){
            a[i-1]=i;
        }
        int i=1, j=n-2, s1=a[0], s2=a[n-1];
        while(i<j){
            if(s1<s2){
                s1+=a[i];
                i++;
            }
            else{
                s2+=a[j];
                j--;
            }
        }
        if(s1==s2){
            return a[i];
        }
        return -1;
    }
};