// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int k=x, r=0;
//         while(k){
//             r=r*10+(k%10);
//             k/=10;
//         }
//         if(x==r){
//             return true;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int> v;
        while(x){
            v.push_back(x%10);
            x/=10;
        }
        x=v.size();
      for(int i=0; i<x/2; i++){
        if(v[i]!=v[x-i-1]){
            return false;
        }
      }  
      return true;
    }
};

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string y=to_string(x);
//         for(int i=1; i<=(y.length()/2); i++){
//             if(y[i-1]!=y[y.length()-i]){
//                return false;
//             }
//         }
//         return true;
//     }
// };