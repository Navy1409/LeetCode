class Solution {
public:
    int fib(int n) {
           int ans=1;
           if(n==0){
            return 0;
           }
        if(n==1){
            return 1;
        }
        ans=fib(n-1)+fib(n-2);
        return ans;
    }
};