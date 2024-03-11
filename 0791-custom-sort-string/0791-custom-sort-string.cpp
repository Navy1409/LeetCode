class Solution {
public:
    string customSortString(string o, string s) {
        string ans;
        int leno=o.size(), lens=s.size();
        for(int i=0; i<leno; i++){
            if(s.find(o[i])!= string::npos){
               for(int j=0; j<lens; j++){
                   if(s[j]==o[i]){
                       ans+=s[j];
                   }
               }
            }
        }
        for(int i=0; i<lens; i++){
            if(o.find(s[i])!= string::npos){
               continue;
            }
            ans+=s[i];
        }
        return ans;
    }
};

// class Solution {
// public:
//     string customSortString(string order, string s) {
//         unordered_map<char, int> orderMap;
//     for (int i = 0; i < order.size(); i++) {
//         orderMap[order[i]] = i;
//     }

//     vector<pair<int, char>> sortedChars;
//     for (char c : s) {
//         sortedChars.push_back({orderMap[c], c});
//     }

//     sort(sortedChars.begin(), sortedChars.end());
//         cout<<sortedChars;

//     string ans;
//     for (const auto& p : sortedChars) {
//         ans += p.second;
//     }

//     return ans;
//     }
// };