class Solution {
public:
    double myPow(double x, int n) {
         if (n == INT_MIN) {
            x = 1 / x;
            n = INT_MAX;
            return x * myPow(x, n);
        }
        if(n==0){
            return 1;
        }
        else if(n<0){
            x=1/x;
            n=-1*n;
        }
        if(n<=1){
            return x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        }
        else{
            return x*myPow(x,n-1);
        }
    }
};
// class Solution {
// public:
//     double myPow(double x, int n) {
//         long long nn = n;
//         if (nn < 0) {
//             x = 1 / x;
//             nn = -nn;
//         }
//         double ans = 1;
//         while (nn) {
//             if (nn % 2 == 1) {
//                 ans *= x;
//             }
//             x *= x;
//             nn /= 2;
//         }
//         return ans;
//     }
// };