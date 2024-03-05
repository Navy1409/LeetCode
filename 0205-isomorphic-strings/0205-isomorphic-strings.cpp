// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         map<char,char> mpp, mppr;
//         int lens=s.size(), lent=t.size();
//         if(lens!=lent){
//             return false;
//         }
//         else{
//             for(int i=0; i<lens; i++){
//                 if(mpp.find(s[i])!=mpp.end()&& mpp[s[i]]!=t[i]){
//                     return false;
//                 }
//                 if(mppr.find(t[i])!=mppr.end()&& mppr[t[i]]!=s[i]){
//                     return false;
//                 }
//                 else{
//                     mpp[s[i]]=t[i];
//                     mppr[t[i]]=s[i];
//                 }
//             }
//         }
//         return true;
//     }
// };

class Solution {
    public:
    bool isIsomorphic(string s, string t) {

        int map1[200];
        int map2[200];
        int lens=s.size();
        int lent= t.size();

        if(lens!=lent)
            return false;


         for (int i = 0; i <lens; i++) {
            if (map1[s[i]] != map2[t[i]])
                return false;

            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        return true;
    }
};