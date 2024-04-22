// class Solution {
// public:
//     vector<string> findWords(vector<string>& words) {
//         string q = "qwertyuiopQWERTYUIOP", a = "asdfghjklASDFGHJKL", z = "zxcvbnmZXCVBNM";
//         vector<int> in;
//         int cq = 0, ca = 0, cz = 0;
//         for (int i = 0; i < words.size(); i++) {
//             ca = 0;
//             cq = 0;
//             cz = 0;
//             for (int j = 0; j < words[i].size(); j++) {
//                 if (find(q.begin(), q.end(), words[i][j]) != q.end() && !ca &&
//                     !cz) {
//                     cq++;
//                 } else if (find(a.begin(), a.end(), words[i][j]) != a.end() &&
//                            !cq && !cz) {
//                     ca++;
//                 } else if (find(z.begin(), z.end(), words[i][j]) != z.end() &&
//                            !ca && !cq) {
//                     cz++;
//                 } else {
//                     ca = 0;
//                     cq = 0;
//                     cz = 0;
//                     break;
//                 }
//             }
//             if (cq || ca || cz) {
//                 in.push_back(i);
//             }
//         }
//         vector<string> ans;
//         for (int i = 0; i < words.size(); i++) {
//             if (find(in.begin(), in.end(), i) != in.end()) {
//                 ans.push_back(words[i]);
//             }
//         }
//         return ans;
//     }
// };

#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        
        vector<string> ans;
        
        for (const string& word : words) {
            bool inRow1 = true, inRow2 = true, inRow3 = true;
            
            for (char c : word) {
                if (!row1.count(c)) inRow1 = false;
                if (!row2.count(c)) inRow2 = false;
                if (!row3.count(c)) inRow3 = false;
            }
            
            if (inRow1 || inRow2 || inRow3) ans.push_back(word);
        }
        
        return ans;
    }
};
