// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n=needle.size(), h=haystack.size();
//         int ans=-1;
//         for(int i=0; i<h;i++){
//             for(int j=0; j<n; j++){
//                 if(needle[j]!=haystack[i+j]){
//                     break;
//                 }
//                 else if( j==n-1){
//                     ans=i;
//                     break;
//                 }
//             }
//             if(ans!=-1){
//                 break;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();
        
        if (n == 0) {
            return 0; // Empty needle, so it's always found at position 0
        }
        
        for (int i = 0; i <= h - n; ++i) {
            int j = 0;
            while (j < n && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == n) {
                return i; // Match found at position i
            }
        }
        
        return -1; // Match not found
    }
};
