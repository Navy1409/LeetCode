// class Solution {
// public:
//     string removeDuplicates(string s) {
//         int len=s.size();
//         stack<char> ans;
//         for(int i=0; i<len; i++){
//             if(ans.empty()){
//                 ans.push(s[i]);
//             }
//             else if(s[i]!=ans.top()){
//                 ans.push(s[i]);
//             }
//             else{
//                 ans.pop();
//             }
//         }
//         string a="";
//         while(!ans.empty()){
//             cout<<ans.top();
//             a+=ans.top();
//             ans.pop();
//         }
//         reverse(a.begin(),a.end());
//         return a;
//     }
// };

class Solution {
public:
    string removeDuplicates(string s) {
        int len = s.size();
        string ans = "";
        for (int i = 0; i < len; i++) {
            if (!ans.empty() && ans.back() == s[i]) {
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};